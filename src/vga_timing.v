module vga_timing (
    input wire clk_25mhz,
    input wire rst,
    output wire h_sync,
    output wire v_sync,
    output wire [9:0] pixel_x,
    output wire [9:0] pixel_y,
    output wire video_active
);

    // VGA 640x480 @ 60Hz timing constants
    localparam H_DISPLAY = 640;
    localparam H_FRONT   = 16;
    localparam H_SYNC    = 96;
    localparam H_BACK    = 48;
    localparam H_TOTAL   = 800;

    localparam V_DISPLAY = 480;
    localparam V_FRONT   = 10;
    localparam V_SYNC    = 2;
    localparam V_BACK    = 33;
    localparam V_TOTAL   = 525;

    reg [9:0] h_count;
    reg [9:0] v_count;

    always @(posedge clk_25mhz or posedge rst) begin
        if (rst) begin
            h_count <= 0;
            v_count <= 0;
        end else begin
            if (h_count == H_TOTAL - 1) begin
                h_count <= 0;
                if (v_count == V_TOTAL - 1)
                    v_count <= 0;
                else
                    v_count <= v_count + 1;
            end else begin
                h_count <= h_count + 1;
            end
        end
    end

    // Sync pulses (active low for standard 640x480)
    assign h_sync = ~(h_count >= (H_DISPLAY + H_FRONT) && h_count < (H_DISPLAY + H_FRONT + H_SYNC));
    assign v_sync = ~(v_count >= (V_DISPLAY + V_FRONT) && v_count < (V_DISPLAY + V_FRONT + V_SYNC));

    assign video_active = (h_count < H_DISPLAY) && (v_count < V_DISPLAY);
    
    assign pixel_x = h_count;
    assign pixel_y = v_count;

endmodule
