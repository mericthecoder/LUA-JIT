#include "../include/compiler.h"
#include <stdlib.h>

void initChunk(BytecodeChunk* chunk) {
    chunk->code = NULL;
    chunk->count = 0;
    chunk->capacity = 0;
}

void writeChunk(BytecodeChunk* chunk, Instruction instruction) {
    if (chunk->capacity < chunk->count + 1) {
        int oldCapacity = chunk->capacity;
        chunk->capacity = oldCapacity < 8 ? 8 : oldCapacity * 2;
        chunk->code = realloc(chunk->code, sizeof(Instruction) * chunk->capacity);
    }
    chunk->code[chunk->count++] = instruction;
}

void compile(ASTNode* ast, BytecodeChunk* chunk) {
    // Simplified compilation: traverses AST and emits bytecode
    if (ast->type == AST_STMT_ASSIGN) {
        Instruction instr = {OP_LOAD_CONST, 10, 0}; // Placeholder for literal
        writeChunk(chunk, instr);
        
        Instruction store = {OP_STORE_VAR, 0, 0}; // Placeholder for variable
        writeChunk(chunk, store);
    }
}

void freeChunk(BytecodeChunk* chunk) {
    free(chunk->code);
    initChunk(chunk);
}
