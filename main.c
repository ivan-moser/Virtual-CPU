#include "include\vm.h"
#include "include\loading.h"
#include "include\fetch.h"
#include "include\decode.h"
#include "include\execute.h"

#include <stdbool.h>
#include <stdio.h>
#include <windows.h>


instruction_t instruction;

uint16_t program[] = {
    0x0127,
    0x0222,
    0x0103,
    0x030a,
    0x0400
};

int main(void) {
    VM vm = {0};
    uint16_t len = sizeof(program) / sizeof(program[0]);

    loading_program(&vm , program, len);

    while(vm.running){
        instruction = decode(fetch(&vm, vm.pc));
        execute(instruction, &vm);
        Sleep(300);
    }

    uint16_t v_len = sizeof(vm.v) / sizeof(vm.v[0]);
    uint16_t m_len = sizeof(vm.memory) / sizeof(vm.memory[0]);

    printf("\nREGISTERS: ");
    for(int i = 0; i < v_len; i++){
        printf("v%d: %d | ",i, vm.v[i]);
    }

    printf("\nMEMORY: ");
    for(int i = 0; i < m_len; i++){
        printf("%d | ", vm.memory[i]);
    }

    return 0;
}