module vga_controller (
    // CPU Interface
    input wire clk_cpu,
    input wire rst,
    input wire [15:0] cpu_address,
    input wire [63:0] cpu_write_data,
    input wire cpu_write_req,
    input wire [2:0] cpu_funct3,
    output wire [63:0] cpu_read_data,

    // VGA Output Interface
    input wire clk_25mhz,
    output wire vga_hsync,
    output wire vga_vsync,
    output wire [3:0] vga_r,
    output wire [3:0] vga_g,
    output wire [3:0] vga_b
);

    wire h_sync_raw;
    wire v_sync_raw;
    wire [9:0] pixel_x;
    wire [9:0] pixel_y;
    wire video_active;

    vga_timing u_timing (
        .clk_25mhz(clk_25mhz),
        .rst(rst),
        .h_sync(h_sync_raw),
        .v_sync(v_sync_raw),
        .pixel_x(pixel_x),
        .pixel_y(pixel_y),
        .video_active(video_active)
    );

    // Framebuffer is 320x200 pixels, 8-bit color
    // We scale it 2x to 640x400 and center it vertically on the 640x480 screen.
    // X center: 0. Range: 0 to 639
    // Y center: (480 - 400) / 2 = 40. Range: 40 to 439

    wire in_window = (pixel_x >= 0 && pixel_x < 640 && 
                      pixel_y >= 40 && pixel_y < 440);

    wire [8:0] fb_x = pixel_x >> 1;
    wire [7:0] fb_y = (pixel_y - 40) >> 1;
    
    // Address is fb_y * 320 + fb_x = (fb_y << 8) + (fb_y << 6) + fb_x
    wire [15:0] vga_ram_addr = in_window ? ((fb_y << 8) + (fb_y << 6) + fb_x) : 16'b0;

    wire [7:0] vga_pixel_data;

    vga_ram u_ram (
        .clk_cpu(clk_cpu),
        .cpu_address(cpu_address),
        .cpu_write_data(cpu_write_data),
        .cpu_write_req(cpu_write_req),
        .cpu_funct3(cpu_funct3),
        .cpu_read_data(cpu_read_data),

        .clk_vga(clk_25mhz),
        .vga_address(vga_ram_addr),
        .vga_read_data(vga_pixel_data)
    );

    // Delay sync and active signals by 1 cycle to match RAM read latency
    reg h_sync_d;
    reg v_sync_d;
    reg video_active_d;
    reg in_window_d;

    always @(posedge clk_25mhz or posedge rst) begin
        if (rst) begin
            h_sync_d <= 1'b1;
            v_sync_d <= 1'b1;
            video_active_d <= 1'b0;
            in_window_d <= 1'b0;
        end else begin
            h_sync_d <= h_sync_raw;
            v_sync_d <= v_sync_raw;
            video_active_d <= video_active;
            in_window_d <= in_window;
        end
    end

    assign vga_hsync = h_sync_d;
    assign vga_vsync = v_sync_d;

    // Convert 8-bit RGB332 to 12-bit RGB444
    // R: 3 bits -> 4 bits (data[7:5] -> {data[7:5], data[5]})
    // G: 3 bits -> 4 bits (data[4:2] -> {data[4:2], data[2]})
    // B: 2 bits -> 4 bits (data[1:0] -> {data[1:0], data[1:0]})
    wire [3:0] r_out = in_window_d ? {vga_pixel_data[7:5], vga_pixel_data[5]} : 4'b0;
    wire [3:0] g_out = in_window_d ? {vga_pixel_data[4:2], vga_pixel_data[2]} : 4'b0;
    wire [3:0] b_out = in_window_d ? {vga_pixel_data[1:0], vga_pixel_data[1:0]} : 4'b0;

    assign vga_r = video_active_d ? r_out : 4'b0;
    assign vga_g = video_active_d ? g_out : 4'b0;
    assign vga_b = video_active_d ? b_out : 4'b0;

endmodule
