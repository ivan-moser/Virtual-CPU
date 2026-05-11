#ifndef DECODE_H
#define DECODE_H

#include "vm.h"

typedef struct {
    uint16_t opcode;
    uint16_t operand;
    uint16_t value;
} instruction_t;

instruction_t decode (uint16_t raw_instruction);

#endif
