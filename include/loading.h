#ifndef LOADING_H
#define LOADING_H

#include "vm.h"
#include "stdint.h"

void loading_program(VM* vm, uint16_t* program, uint16_t len);

#endif