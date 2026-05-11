#include "..\include\loading.h"
#include <stdio.h>

void loading_program(VM* vm, uint16_t* program, uint16_t len) {

    vm->running = true;
    vm->pc = 0;

    for(uint16_t i = 0; i < len; i++){
        vm->memory[i] = program[i];
    }
    printf("\nLoading completed.");
}