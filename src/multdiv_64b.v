module multdiv_64b (
    input  wire        clk,
    input  wire        rst,
    input  wire        is_m_ext,
    input  wire [2:0]  funct3,
    input  wire [63:0] a,
    input  wire [63:0] b,

    output reg  [63:0] result,
    output wire        busy
);

    reg [1:0] state;

    localparam IDLE  = 2'd0;
    localparam CALC1 = 2'd1;
    localparam CALC2 = 2'd2;
    localparam CALC3 = 2'd3;

    // Busy is asserted if we are calculating, except on the last cycle (CALC3)
    // where we drop busy to let the pipeline move forward.
    assign busy = is_m_ext && (state != CALC3);

    wire signed [63:0] a_signed = a;
    wire signed [63:0] b_signed = b;
    wire signed [127:0] mul_signed = a_signed * b_signed;
    wire [127:0] mul_unsigned = a * b;
    wire signed [127:0] mul_su = a_signed * $signed({1'b0, b});

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state  <= IDLE;
            result <= 64'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (is_m_ext) begin
                        state <= CALC1;
                        // Calculate result immediately but hold it
                        case (funct3)
                            3'b000: result <= mul_signed[63:0];       // MUL
                            3'b001: result <= mul_signed[127:64];     // MULH
                            3'b010: result <= mul_su[127:64];         // MULHSU
                            3'b011: result <= mul_unsigned[127:64];   // MULHU
                            3'b100: result <= (b == 0) ? -1 : a_signed / b_signed; // DIV
                            3'b101: result <= (b == 0) ? -1 : a / b;               // DIVU
                            3'b110: result <= (b == 0) ? a_signed : a_signed % b_signed; // REM
                            3'b111: result <= (b == 0) ? a : a % b;                      // REMU
                        endcase
                    end
                end
                CALC1: state <= CALC2;
                CALC2: state <= CALC3;
                CALC3: state <= IDLE;
                default: state <= IDLE;
            endcase
        end
    end
endmodule
