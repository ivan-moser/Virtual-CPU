#ifndef VM_H
#define VM_H

#include <stdint.h>
#include <stdbool.h>

typedef enum {
    MOVE = 1,
    ADD,
    JUMP,
    HALT
}opcode;

typedef struct {
    uint8_t memory[256];
    uint16_t v[4];
    uint16_t pc;
    uint16_t program_size;

    bool running;
} VM;

#endif