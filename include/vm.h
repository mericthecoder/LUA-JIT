#ifndef LUAJIT_VM_H
#define LUAJIT_VM_H

#include "compiler.h"

typedef enum {
    INTERPRET_OK,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

InterpretResult interpret(BytecodeChunk* chunk);

#endif
