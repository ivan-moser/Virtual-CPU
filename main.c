#include "include\vm.h"
#include "include\loading.h"
#include "include\fetch.h"
#include "include\decode.h"

#include <stdbool.h>
#include <stdio.h>

VM vm;
instruction_t instruction;

uint16_t program[] = {
    0x01,
    0x25,
    0x02,
    0x22,
    0x03,
    0x01 
};

int main(void) {
    uint16_t len = sizeof(program) / sizeof(program[0]);

    loading_program(&vm , program, len);

    //while(vm.running){
        instruction = decode(fetch(&vm, vm.pc));
        //execute()
    //}

    return 0;
}