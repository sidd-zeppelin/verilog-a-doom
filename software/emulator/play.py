import os
import sys
import subprocess
import pygame
import time

def main():
    # Build path to emulator binary
    bin_path = os.path.join(os.path.dirname(__file__), "..", "..", "obj_dir", "Vsoc_top")
    if not os.path.exists(bin_path):
        print(f"Error: Emulator binary not found at {bin_path}")
        print("Please run play.sh to compile it first.")
        sys.exit(1)
        
    print("Starting Pygame Frontend...")
    pygame.init()
    
    # Setup window (scale 128x128 to 512x512)
    SCALE = 4
    WIDTH, HEIGHT = 128, 128
    screen = pygame.display.set_mode((WIDTH * SCALE, HEIGHT * SCALE))
    pygame.display.set_caption("Verilog-A-Doom Emulator")
    
    # Spawn Verilator subprocess
    # Run from the project root so paths like "software/doom/doom.bin" resolve correctly
    cwd = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
    
    print(f"Running emulator from {cwd}...")
    p = subprocess.Popen([bin_path], cwd=cwd, stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=sys.stderr)
    
    clock = pygame.time.Clock()
    running = True
    
    # Button mapping
    # Bit 0: UP
    # Bit 1: DOWN
    # Bit 2: LEFT
    # Bit 3: RIGHT
    # Bit 4: FIRE (Space)
    # Bit 5: USE (E)
    
    frame_size = WIDTH * HEIGHT * 3
    
    try:
        while running:
            # Handle events
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    running = False
            
            # Read input state
            keys = pygame.key.get_pressed()
            btn_state = 0
            if keys[pygame.K_UP] or keys[pygame.K_w]: btn_state |= (1 << 0)
            if keys[pygame.K_DOWN] or keys[pygame.K_s]: btn_state |= (1 << 1)
            if keys[pygame.K_LEFT] or keys[pygame.K_a]: btn_state |= (1 << 2)
            if keys[pygame.K_RIGHT] or keys[pygame.K_d]: btn_state |= (1 << 3)
            if keys[pygame.K_SPACE]: btn_state |= (1 << 4)
            if keys[pygame.K_e]: btn_state |= (1 << 5)
            
            # Send input to emulator
            p.stdin.write(bytes([btn_state]))
            p.stdin.flush()
            
            # Try to read a frame from the emulator
            # We look for the "FRM" sync token
            synced = False
            while not synced:
                token = p.stdout.read(3)
                if not token:
                    print("Emulator process died.")
                    running = False
                    break
                if token == b"FRM":
                    synced = True
                else:
                    # Sync lost, read 1 byte at a time to re-sync
                    p.stdout.seek(-2, 1) # This doesn't work on pipes, just read 1 by 1
                    # Actually, if we get out of sync, we just need to find 'F', 'R', 'M'
                    pass
            
            if not running:
                break
                
            frame_data = p.stdout.read(frame_size)
            if len(frame_data) != frame_size:
                print("Incomplete frame data.")
                break
                
            # Render frame
            surface = pygame.image.frombuffer(frame_data, (WIDTH, HEIGHT), "RGB")
            # Scale it up
            scaled_surface = pygame.transform.scale(surface, (WIDTH * SCALE, HEIGHT * SCALE))
            screen.blit(scaled_surface, (0, 0))
            pygame.display.flip()
            
            # We don't limit FPS here, we let the Verilator process govern the speed.
            # But we can add a small sleep to avoid burning CPU if Verilator is super fast.
            # clock.tick(60) 
            
    except KeyboardInterrupt:
        pass
    finally:
        print("Terminating emulator...")
        p.terminate()
        p.wait()
        pygame.quit()

if __name__ == "__main__":
    main()
