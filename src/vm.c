#include "../include/vm.h"
#include "../include/jit_frontend.h"
#include <stdio.h>

InterpretResult interpret(BytecodeChunk* chunk, Profiler* profiler) {
    for (int i = 0; i < chunk->count; i++) {
        if (recordExecution(profiler, i)) {
            printf("Hot path detected at PC: %d\n", i);
            compileTraceToIR(chunk, i);
        }
        
        Instruction instruction = chunk->code[i];
        switch (instruction.code) {
            case OP_LOAD_CONST:
                printf("LOAD_CONST: %d\n", instruction.arg1);
                break;
            case OP_STORE_VAR:
                printf("STORE_VAR\n");
                break;
            case OP_ADD:
                printf("ADD\n");
                break;
            case OP_RETURN:
                printf("RETURN\n");
                return INTERPRET_OK;
        }
    }
    return INTERPRET_OK;
}
