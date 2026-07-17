#include "../include/backend.h"
#include <stdio.h>
#include <stdlib.h>

void initCodeBuffer(CodeBuffer* buffer) {
    buffer->buffer = malloc(1024); // Simple fixed buffer
    buffer->size = 0;
    buffer->capacity = 1024;
}

void emit(CodeBuffer* buffer, IRInstruction instr) {
    // Mock emission: Print the "assembly" to represent machine code generation
    printf("  [Backend] Emitting: ");
    switch (instr.op) {
        case IR_LOAD: printf("MOV EAX, [%d]\n", instr.src1); break;
        case IR_STORE: printf("MOV [%d], EAX\n", instr.dest); break;
        case IR_ADD: printf("ADD EAX, EBX\n"); break;
        default: printf("UNKNOWN\n"); break;
    }
    // In a real JIT, we would write machine bytes to buffer->buffer
}

void freeCodeBuffer(CodeBuffer* buffer) {
    free(buffer->buffer);
}
