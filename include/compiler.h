#ifndef LUAJIT_COMPILER_H
#define LUAJIT_COMPILER_H

#include "ast.h"
#include "opcode.h"

typedef struct {
    Instruction* code;
    int count;
    int capacity;
} BytecodeChunk;

void initChunk(BytecodeChunk* chunk);
void compile(ASTNode* ast, BytecodeChunk* chunk);
void freeChunk(BytecodeChunk* chunk);

#endif
