#include "..\include\execute.h"


void execute(instruction_t instruction, VM* vm){ 

    uint16_t instruction_reg = instruction.vm_register;
    uint16_t instruction_value = instruction.value;

    switch (instruction.opcode)
    {
    case 1:
        vm->v[instruction_reg] = instruction_value;
        printf("\nPC->%d  MOVE %d, %d;",vm->pc, instruction_reg, instruction_value);
        
        vm->pc += 2;
        break;
    
    case 2:
        vm->v[instruction_reg] += instruction_value;
        printf("\nPC->%d  ADD %d, %d;",vm->pc, instruction_reg, instruction_value);

        vm->pc += 2;
        break;
    
    case 3:
        if(instruction_value % 2 == 0){
            printf("\nPC->%d  JUMP %d;",vm->pc, instruction_value);
            vm->pc = instruction_value;
        } else {
            printf("\nERRORE FATALE!!");
            printf("\nHAI SPOSTATO IL PC A UN INDIRIZZO NON IDONEO!");
            vm->running = false;
        }
        break;

    case 4:
        vm->running = false;
        printf("\nPC->%d  PROGRAM ENDED CORRECTLY", vm->pc);
        break;
    }
}