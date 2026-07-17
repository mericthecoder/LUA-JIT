#include "../include/profiler.h"
#include <stdlib.h>
#include <string.h>

void initProfiler(Profiler* profiler, int max_pc) {
    profiler->max_pc = max_pc;
    profiler->pc_counters = calloc(max_pc, sizeof(int));
}

int recordExecution(Profiler* profiler, int pc) {
    if (pc < 0 || pc >= profiler->max_pc) return 0;
    profiler->pc_counters[pc]++;
    return profiler->pc_counters[pc] >= HOT_THRESHOLD;
}

void freeProfiler(Profiler* profiler) {
    free(profiler->pc_counters);
}
