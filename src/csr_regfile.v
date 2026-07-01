module csr_regfile (
    input clk,
    input rst,

    // CSR instructions interface
    input [11:0] csr_addr,
    input [63:0] csr_wdata,
    input csr_write,
    input csr_read,
    output reg [63:0] csr_rdata,

    // Trap & Interrupt interface
    input timer_interrupt,
    
    // Trap Trigger (from top level)
    input take_trap,
    input [63:0] trap_pc, // PC to save in mepc
    
    // MRET Trigger (from EX stage)
    input is_mret,

    // Outputs for top level
    output reg [63:0] mepc,
    output reg [63:0] mtvec,
    output wire mstatus_mie,
    output wire mie_mtie
);
    reg [63:0] mstatus; // bit 3 = MIE, bit 7 = MPIE
    reg [63:0] mcause;
    reg [63:0] mie;     // bit 7 = MTIE
    reg [63:0] mscratch;
    
    assign mstatus_mie = mstatus[3];
    assign mie_mtie    = mie[7];

    always @(posedge clk) begin
        if (rst) begin
            mstatus <= 64'b0;
            mtvec <= 64'b0;
            mepc <= 64'b0;
            mcause <= 64'b0;
            mie <= 64'b0;
            mscratch <= 64'b0;
        end else begin
            if (take_trap) begin
                // Enter trap
                mstatus[7] <= mstatus[3]; // MPIE = MIE
                mstatus[3] <= 1'b0;       // MIE = 0
                mepc <= trap_pc;
                mcause <= 64'h8000000000000007; // Timer interrupt
            end else if (is_mret) begin
                // Return from trap
                mstatus[3] <= mstatus[7]; // MIE = MPIE
                mstatus[7] <= 1'b1;
            end else if (csr_write) begin
                case (csr_addr)
                    12'h300: mstatus <= csr_wdata;
                    12'h304: mie <= csr_wdata;
                    12'h305: mtvec <= csr_wdata;
                    12'h340: mscratch <= csr_wdata;
                    12'h341: mepc <= csr_wdata;
                    12'h342: mcause <= csr_wdata;
                endcase
            end
        end
    end

    // Combinational read
    always @(*) begin
        if (csr_read) begin
            case (csr_addr)
                12'h300: csr_rdata = mstatus;
                12'h304: csr_rdata = mie;
                12'h305: csr_rdata = mtvec;
                12'h340: csr_rdata = mscratch;
                12'h341: csr_rdata = mepc;
                12'h342: csr_rdata = mcause;
                12'h344: csr_rdata = {56'b0, timer_interrupt, 7'b0}; // mip
                default: csr_rdata = 64'b0;
            endcase
        end else begin
            csr_rdata = 64'b0;
        end
    end
endmodule
