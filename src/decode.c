#include "..\include\decode.h"

instruction_t decode (uint16_t raw_instruction){
    instruction_t instruction = {
        .operand = (raw_instruction & 0x00f0) >> 4,
        .value = (raw_instruction & 0x000f)
    };

    uint16_t raw_opcode = (raw_instruction & 0xff00) >> 8;

    switch (raw_opcode)
    {
    case 1:
        instruction.opcode = MOVE;
        break;
    case 2:
        instruction.opcode = ADD;
        break;
    case 3:
        instruction.opcode = JUMP;
        break;
    case 4:
        instruction.opcode = HALT;
        break;
    }

    return instruction;
}