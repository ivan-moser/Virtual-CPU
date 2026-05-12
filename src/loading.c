#include "..\include\loading.h"
#include <stdio.h>

void loading_program(VM* vm, uint16_t* program, uint16_t len) {

    vm->running = true;
    vm->pc = 0;
    vm->program_size = len *2;

    for(uint16_t i = 0; i < len; i++){
        vm->memory[i * 2] = (program[i] >> 8) & 0xFF;
        vm->memory[i * 2 + 1] = program[i] & 0xFF;
    }

    printf("\nLoading completed.");
}