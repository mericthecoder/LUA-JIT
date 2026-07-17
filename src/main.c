#include "../include/compiler.h"
#include "../include/vm.h"
#include "../include/profiler.h"
#include <stdio.h>

int main() {
    BytecodeChunk chunk;
    initChunk(&chunk);
    Profiler profiler;
    initProfiler(&profiler, 100);

    // Manually pushing instructions for testing the VM
    Instruction instr1 = {OP_LOAD_CONST, 10, 0};
    Instruction instr2 = {OP_RETURN, 0, 0};
    
    writeChunk(&chunk, instr1);
    writeChunk(&chunk, instr2);
    
    printf("Running VM test...\n");
    interpret(&chunk, &profiler);
    
    freeChunk(&chunk);
    freeProfiler(&profiler);
    return 0;
}
