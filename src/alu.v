module alu (
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  opcode,

    output reg  [63:0] result,
    output reg         cout,
    output reg         carry_flag,
    output reg         overflow_flag,
    output wire        zero_flag
);

    wire [63:0] addsub_res;
    wire        addsub_cout;
    wire        addsub_overflow;

    wire [63:0] and_res;
    wire [63:0] or_res;
    wire [63:0] xor_res;

    wire [63:0] sll_res;
    wire [63:0] srl_res;
    wire [63:0] sra_res;

    wire [63:0] slt_res;
    wire [63:0] sltu_res;

    wire sub_sel;
    assign sub_sel = (opcode == 4'b1000);

    addsub_cla_64b u_addsub (
        .a(a),
        .b(b),
        .sub(sub_sel),
        .result(addsub_res),
        .cout(addsub_cout),
        .overflow(addsub_overflow)
    );

    and_64b u_and (
        .a(a),
        .b(b),
        .result(and_res)
    );

    or_64b u_or (
        .a(a),
        .b(b),
        .result(or_res)
    );

    xor_64b u_xor (
        .a(a),
        .b(b),
        .result(xor_res)
    );

    sll_64b u_sll (
        .a(a),
        .shamt(b[5:0]),
        .result(sll_res)
    );

    srl_64b u_srl (
        .a(a),
        .shamt(b[5:0]),
        .result(srl_res)
    );

    sra_64b u_sra (
        .a(a),
        .shamt(b[5:0]),
        .result(sra_res)
    );

    slt_64b u_slt (
        .rs1(a),
        .rs2(b),
        .result(slt_res)
    );

    sltu_64b u_sltu (
        .rs1(a),
        .rs2(b),
        .result(sltu_res)
    );

    always @(*) begin
        result        = 64'b0;
        cout          = 1'b0;
        carry_flag    = 1'b0;
        overflow_flag = 1'b0;

        case (opcode)

            // ADD
            4'b0000: begin
                result        = addsub_res;
                cout          = addsub_cout;
                carry_flag    = addsub_cout;
                overflow_flag = addsub_overflow;
            end

            // SLL
            4'b0001: result = sll_res;

            // SLT
            4'b0010: result = slt_res;

            // SLTU
            4'b0011: result = sltu_res;

            // XOR
            4'b0100: result = xor_res;

            // SRL
            4'b0101: result = srl_res;

            // OR
            4'b0110: result = or_res;

            // AND
            4'b0111: result = and_res;

            // SUB
            4'b1000: begin
                result        = addsub_res;
                cout          = addsub_cout;
                carry_flag    = addsub_cout;
                overflow_flag = addsub_overflow;
            end

            // SRA
            4'b1101: result = sra_res;

            default: result = 64'b0;
        endcase
    end

    assign zero_flag = (result == 64'b0);

endmodule
