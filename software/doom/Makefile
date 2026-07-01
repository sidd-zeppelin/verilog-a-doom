CC = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

CFLAGS = -march=rv64im -mabi=lp64 -mcmodel=medany -O2 -I../doomgeneric/doomgeneric -DDOOMGENERIC_RESX=320 -DDOOMGENERIC_RESY=200 --specs=picolibc.specs
LDFLAGS = -T linker.ld -nostartfiles -lc -lm -lgcc -Wl,--wrap=I_Error

SRC_DOOM_BASE = dummy.c am_map.c doomdef.c doomstat.c dstrings.c d_event.c d_items.c d_iwad.c d_loop.c d_main.c d_mode.c d_net.c f_finale.c f_wipe.c g_game.c hu_lib.c hu_stuff.c info.c i_cdmus.c i_endoom.c i_joystick.c i_scale.c i_sound.c i_system.c i_timer.c memio.c m_argv.c m_bbox.c m_cheat.c m_config.c m_controls.c m_fixed.c m_menu.c m_misc.c m_random.c p_ceilng.c p_doors.c p_enemy.c p_floor.c p_inter.c p_lights.c p_map.c p_maputl.c p_mobj.c p_plats.c p_pspr.c p_saveg.c p_setup.c p_sight.c p_spec.c p_switch.c p_telept.c p_tick.c p_user.c r_bsp.c r_data.c r_draw.c r_main.c r_plane.c r_segs.c r_sky.c r_things.c sha1.c sounds.c statdump.c st_lib.c st_stuff.c s_sound.c tables.c v_video.c wi_stuff.c w_checksum.c w_file.c w_main.c w_wad.c z_zone.c w_file_stdc.c i_input.c i_video.c doomgeneric.c
DOOM_SRCS := $(addprefix ../doomgeneric/doomgeneric/, $(SRC_DOOM_BASE))

SRCS = crt0.s doomgeneric_riscv.c syscalls.c $(DOOM_SRCS)
OBJS = $(addsuffix .o, $(basename $(SRCS))) wad_data.o

all: doom.bin

wad_data.o: ../DOOM1.WAD
	cp ../DOOM1.WAD DOOM1.WAD
	riscv64-unknown-elf-ld -r -b binary DOOM1.WAD -o $@
	rm DOOM1.WAD

doom.elf: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

doom.bin: doom.elf
	$(OBJCOPY) -O binary $< $@
	# Convert binary to hex instructions format
	hexdump -v -e '1/1 "%02X\n"' $@ > ../../instructions.txt

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.elf *.bin *.o
	find ../doomgeneric/doomgeneric -name "*.o" -type f -delete
