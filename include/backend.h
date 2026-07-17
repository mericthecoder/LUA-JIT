#ifndef LUAJIT_BACKEND_H
#define LUAJIT_BACKEND_H

#include "ir.h"

typedef struct {
    unsigned char* buffer;
    int size;
    int capacity;
} CodeBuffer;

void initCodeBuffer(CodeBuffer* buffer);
void emit(CodeBuffer* buffer, IRInstruction instr);
void freeCodeBuffer(CodeBuffer* buffer);

#endif
