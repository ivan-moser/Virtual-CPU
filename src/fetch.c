#include "..\include\fetch.h"
#include "..\include\vm.h"
#include <stdint.h>
#include <stdio.h>

uint16_t fetch(VM* vm, uint16_t pc){
    uint16_t raw_instruction = (vm->memory[pc] << 8) | vm->memory[pc + 1] ;

    printf("\nRaw instruction => 0x%x", raw_instruction);

    return raw_instruction;

} 