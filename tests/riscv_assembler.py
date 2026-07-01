def reg(name):
    """Convert register name to integer (e.g. 'x1' -> 1, 'sp' -> 2)."""
    if isinstance(name, int):
        return name
    if name.startswith('x'):
        return int(name[1:])
    abi = {
        'zero': 0, 'ra': 1, 'sp': 2, 'gp': 3, 'tp': 4,
        't0': 5, 't1': 6, 't2': 7, 's0': 8, 'fp': 8, 's1': 9,
        'a0': 10, 'a1': 11, 'a2': 12, 'a3': 13, 'a4': 14, 'a5': 15, 'a6': 16, 'a7': 17,
        's2': 18, 's3': 19, 's4': 20, 's5': 21, 's6': 22, 's7': 23, 's8': 24, 's9': 25,
        's10': 26, 's11': 27, 't3': 28, 't4': 29, 't5': 30, 't6': 31
    }
    return abi.get(name, 0)

class RISCVAssembler:
    @staticmethod
    def encode_r(funct7, rs2, rs1, funct3, rd, opcode):
        return (funct7 << 25) | (reg(rs2) << 20) | (reg(rs1) << 15) | (funct3 << 12) | (reg(rd) << 7) | opcode

    @staticmethod
    def encode_i(imm, rs1, funct3, rd, opcode):
        return ((imm & 0xFFF) << 20) | (reg(rs1) << 15) | (funct3 << 12) | (reg(rd) << 7) | opcode

    @staticmethod
    def encode_s(imm, rs2, rs1, funct3, opcode):
        imm_11_5 = (imm >> 5) & 0x7F
        imm_4_0 = imm & 0x1F
        return (imm_11_5 << 25) | (reg(rs2) << 20) | (reg(rs1) << 15) | (funct3 << 12) | (imm_4_0 << 7) | opcode

    @staticmethod
    def encode_b(imm, rs2, rs1, funct3, opcode):
        imm_12 = (imm >> 12) & 0x1
        imm_11 = (imm >> 11) & 0x1
        imm_10_5 = (imm >> 5) & 0x3F
        imm_4_1 = (imm >> 1) & 0xF
        return (imm_12 << 31) | (imm_10_5 << 25) | (reg(rs2) << 20) | (reg(rs1) << 15) | (funct3 << 12) | (imm_4_1 << 8) | (imm_11 << 7) | opcode

    @staticmethod
    def encode_u(imm, rd, opcode):
        return ((imm & 0xFFFFF000)) | (reg(rd) << 7) | opcode

    @staticmethod
    def encode_j(imm, rd, opcode):
        imm_20 = (imm >> 20) & 0x1
        imm_19_12 = (imm >> 12) & 0xFF
        imm_11 = (imm >> 11) & 0x1
        imm_10_1 = (imm >> 1) & 0x3FF
        return (imm_20 << 31) | (imm_10_1 << 21) | (imm_11 << 20) | (imm_19_12 << 12) | (reg(rd) << 7) | opcode

    @classmethod
    def assemble(cls, inst: str) -> int:
        parts = inst.replace(',', ' ').split()
        if not parts:
            return 0
        mnem = parts[0].lower()
        args = parts[1:]

        # R-type
        if mnem == 'add':  return cls.encode_r(0x00, args[2], args[1], 0x0, args[0], 0x33)
        if mnem == 'sub':  return cls.encode_r(0x20, args[2], args[1], 0x0, args[0], 0x33)
        if mnem == 'sll':  return cls.encode_r(0x00, args[2], args[1], 0x1, args[0], 0x33)
        if mnem == 'slt':  return cls.encode_r(0x00, args[2], args[1], 0x2, args[0], 0x33)
        if mnem == 'sltu': return cls.encode_r(0x00, args[2], args[1], 0x3, args[0], 0x33)
        if mnem == 'xor':  return cls.encode_r(0x00, args[2], args[1], 0x4, args[0], 0x33)
        if mnem == 'srl':  return cls.encode_r(0x00, args[2], args[1], 0x5, args[0], 0x33)
        if mnem == 'sra':  return cls.encode_r(0x20, args[2], args[1], 0x5, args[0], 0x33)
        if mnem == 'or':   return cls.encode_r(0x00, args[2], args[1], 0x6, args[0], 0x33)
        if mnem == 'and':  return cls.encode_r(0x00, args[2], args[1], 0x7, args[0], 0x33)

        # M-extension (Hardware Math)
        if mnem == 'mul':    return cls.encode_r(0x01, args[2], args[1], 0x0, args[0], 0x33)
        if mnem == 'mulh':   return cls.encode_r(0x01, args[2], args[1], 0x1, args[0], 0x33)
        if mnem == 'mulhsu': return cls.encode_r(0x01, args[2], args[1], 0x2, args[0], 0x33)
        if mnem == 'mulhu':  return cls.encode_r(0x01, args[2], args[1], 0x3, args[0], 0x33)
        if mnem == 'div':    return cls.encode_r(0x01, args[2], args[1], 0x4, args[0], 0x33)
        if mnem == 'divu':   return cls.encode_r(0x01, args[2], args[1], 0x5, args[0], 0x33)
        if mnem == 'rem':    return cls.encode_r(0x01, args[2], args[1], 0x6, args[0], 0x33)
        if mnem == 'remu':   return cls.encode_r(0x01, args[2], args[1], 0x7, args[0], 0x33)

        # I-type (ALU)
        if mnem == 'addi': return cls.encode_i(int(args[2], 0), args[1], 0x0, args[0], 0x13)
        if mnem == 'slli': return cls.encode_i(int(args[2], 0) & 0x3F, args[1], 0x1, args[0], 0x13)
        if mnem == 'slti': return cls.encode_i(int(args[2], 0), args[1], 0x2, args[0], 0x13)
        if mnem == 'sltiu':return cls.encode_i(int(args[2], 0), args[1], 0x3, args[0], 0x13)
        if mnem == 'xori': return cls.encode_i(int(args[2], 0), args[1], 0x4, args[0], 0x13)
        if mnem == 'srli': return cls.encode_i(int(args[2], 0) & 0x3F, args[1], 0x5, args[0], 0x13)
        if mnem == 'srai': return cls.encode_i((int(args[2], 0) & 0x3F) | 0x400, args[1], 0x5, args[0], 0x13)
        if mnem == 'ori':  return cls.encode_i(int(args[2], 0), args[1], 0x6, args[0], 0x13)
        if mnem == 'andi': return cls.encode_i(int(args[2], 0), args[1], 0x7, args[0], 0x13)

        # Load
        if mnem in ['lb', 'lh', 'lw', 'ld', 'lbu', 'lhu', 'lwu']:
            # format: lw rd, offset(rs1)
            rd = args[0]
            offset, rs1_part = args[1].split('(')
            rs1 = rs1_part.strip(')')
            funct3 = {'lb':0, 'lh':1, 'lw':2, 'ld':3, 'lbu':4, 'lhu':5, 'lwu':6}[mnem]
            return cls.encode_i(int(offset, 0), rs1, funct3, rd, 0x03)

        # Store
        if mnem in ['sb', 'sh', 'sw', 'sd']:
            # format: sw rs2, offset(rs1)
            rs2 = args[0]
            offset, rs1_part = args[1].split('(')
            rs1 = rs1_part.strip(')')
            funct3 = {'sb':0, 'sh':1, 'sw':2, 'sd':3}[mnem]
            return cls.encode_s(int(offset, 0), rs2, rs1, funct3, 0x23)

        # Branch
        if mnem in ['beq', 'bne', 'blt', 'bge', 'bltu', 'bgeu']:
            funct3 = {'beq':0, 'bne':1, 'blt':4, 'bge':5, 'bltu':6, 'bgeu':7}[mnem]
            return cls.encode_b(int(args[2], 0), args[1], args[0], funct3, 0x63)

        # U-type
        if mnem == 'lui':   return cls.encode_u(int(args[1], 0) << 12, args[0], 0x37)
        if mnem == 'auipc': return cls.encode_u(int(args[1], 0) << 12, args[0], 0x17)

        # J-type
        if mnem == 'jal':   return cls.encode_j(int(args[1], 0), args[0], 0x6F)
        if mnem == 'jalr':
            if len(args) == 3: # jalr rd, rs1, imm
                return cls.encode_i(int(args[2], 0), args[1], 0x0, args[0], 0x67)
            else:
                # jalr rd, imm(rs1) OR just jalr rs1
                return 0 # simplify for now, standard is jalr rd, rs1, imm or jalr rs1 (rd=ra, imm=0)

        # Pseudo-instructions
        if mnem == 'nop':
            return cls.encode_i(0, 0, 0, 0, 0x13) # addi x0, x0, 0
        if mnem == 'mv':
            return cls.encode_i(0, args[1], 0x0, args[0], 0x13) # addi rd, rs1, 0

        # SYSTEM
        if mnem == 'csrrw':
            return cls.encode_i(int(args[1], 0), args[2], 0x1, args[0], 0x73)
        if mnem == 'csrrs':
            return cls.encode_i(int(args[1], 0), args[2], 0x2, args[0], 0x73)
        if mnem == 'csrrc':
            return cls.encode_i(int(args[1], 0), args[2], 0x3, args[0], 0x73)
        if mnem == 'mret':
            return cls.encode_i(0x302, 0, 0x0, 0, 0x73)

        raise ValueError(f"Unsupported instruction: {inst}")

    @classmethod
    def assemble_to_hex(cls, insts: list[str]) -> list[str]:
        return [f"{cls.assemble(i):08x}" for i in insts]

    @classmethod
    def write_hex_file(cls, insts: list[str], filename: str):
        hex_words = cls.assemble_to_hex(insts)
        with open(filename, 'w') as f:
            for w in hex_words:
                # Write byte by byte in little endian format
                f.write(f"{w[6:8]}\n{w[4:6]}\n{w[2:4]}\n{w[0:2]}\n")

if __name__ == "__main__":
    test_prog = ["addi x1, x0, 42", "add x2, x1, x1", "nop", "beq x1, x2, -4"]
    hex_prog = RISCVAssembler.assemble_to_hex(test_prog)
    print(hex_prog)
