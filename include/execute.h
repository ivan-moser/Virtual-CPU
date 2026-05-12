#ifndef EXECUTE_H
#define ECECUTE_H

#include "vm.h"
#include "decode.h"
#include <stdio.h>

void execute(instruction_t instruction, VM* vm);

#endif