#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

// WAD Data symbols linked from wad_data.o
extern uint8_t _binary_DOOM1_WAD_start[];
extern uint8_t _binary_DOOM1_WAD_end[];

// -------------------------------------------------------
// Minimal stdout/stderr for picolibc
// -------------------------------------------------------
static int dummy_putc(char c, FILE *file) {
    (void)file;
    return (unsigned char)c;
}
static FILE __stdio = FDEV_SETUP_STREAM(dummy_putc, NULL, NULL, _FDEV_SETUP_WRITE);
FILE *const stdin  = &__stdio;
FILE *const stdout = &__stdio;
FILE *const stderr = &__stdio;

// -------------------------------------------------------
// Heap management
// -------------------------------------------------------
extern char _end[];
static char *heap_ptr = NULL;

void* sbrk(int incr) {
    if (heap_ptr == NULL) heap_ptr = _end;
    char *prev = heap_ptr;
    heap_ptr += incr;
    return (void *)prev;
}

// -------------------------------------------------------
// WAD FILE* interception (intercept at fopen level)
// -------------------------------------------------------
// We use a fake FILE struct stored in a static buffer.
// w_file_stdc.c calls: fopen, fread, fseek, ftell, fclose

static uint8_t  _wad_open = 0;
static uint32_t _wad_pos  = 0;

// A sentinel value we return as the WAD FILE*
// Any non-NULL pointer that isn't a real FILE works.
#define WAD_FILE_SENTINEL ((FILE*)0xDEADBEEF)

static int is_wad_name(const char *name) {
    return name && (strstr(name, "doom1.wad") || strstr(name, "DOOM1.WAD") ||
                    strstr(name, "doom.wad")  || strstr(name, "DOOM.WAD"));
}

FILE *fopen(const char *path, const char *mode) {
    if (is_wad_name(path)) {
        _wad_pos  = 0;
        _wad_open = 1;
        return WAD_FILE_SENTINEL;
    }
    return NULL;
}

FILE *fopen64(const char *path, const char *mode) {
    return fopen(path, mode);
}

int fclose(FILE *f) {
    if (f == WAD_FILE_SENTINEL) {
        _wad_open = 0;
        return 0;
    }
    return -1;
}

size_t fread(void *ptr, size_t size, size_t nmemb, FILE *f) {
    if (f == WAD_FILE_SENTINEL) {
        uint32_t wad_size = (uint32_t)(_binary_DOOM1_WAD_end - _binary_DOOM1_WAD_start);
        uint32_t bytes = (uint32_t)(size * nmemb);
        if (_wad_pos >= wad_size) return 0;
        uint32_t avail = wad_size - _wad_pos;
        if (bytes > avail) bytes = avail;
        memcpy(ptr, _binary_DOOM1_WAD_start + _wad_pos, bytes);
        _wad_pos += bytes;
        return bytes / size;
    }
    return 0;
}

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *f) {
    return nmemb; // silently succeed
}

int fseek(FILE *f, long offset, int whence) {
    if (f == WAD_FILE_SENTINEL) {
        uint32_t wad_size = (uint32_t)(_binary_DOOM1_WAD_end - _binary_DOOM1_WAD_start);
        if (whence == SEEK_SET)       _wad_pos = (uint32_t)offset;
        else if (whence == SEEK_CUR)  _wad_pos += (int32_t)offset;
        else if (whence == SEEK_END)  _wad_pos = (uint32_t)(wad_size + offset);
        if (_wad_pos > wad_size) _wad_pos = wad_size;
        return 0;
    }
    return -1;
}

long ftell(FILE *f) {
    if (f == WAD_FILE_SENTINEL) return (long)_wad_pos;
    return -1;
}



// -------------------------------------------------------
// Minimal POSIX stubs for things DOOM calls
// -------------------------------------------------------
int open(const char *name, int flags, ...) { return -1; }
int close(int fd) { return -1; }
int read(int fd, void *buf, size_t len) { return -1; }
int write(int fd, const void *buf, size_t len) { return (int)len; }
long lseek(int fd, long offset, int whence) { return -1; }
int fstat(int fd, struct stat *st) { return -1; }
int stat(const char *path, struct stat *st) { return -1; }
int isatty(int fd) { return 1; }

char *getenv(const char *name) { return NULL; }

int mkdir(const char *path, mode_t mode) { return -1; }
int unlink(const char *path) { return -1; }
int rename(const char *old, const char *new) { return -1; }
int access(const char *path, int mode) { return -1; }

int getpid(void) { return 1; }
int kill(int pid, int sig) { return -1; }

void exit(int status) {
    // Paint the screen solid red to signal a crash/exit
    volatile uint8_t *fb = (volatile uint8_t*)0x01000000;
    for (int i = 0; i < 320 * 200; i++) fb[i] = 0xE0; // bright red RGB332
    for(;;);
}
void _exit(int status) { exit(status); }

