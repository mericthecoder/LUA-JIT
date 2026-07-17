#ifndef LUAJIT_PROFILER_H
#define LUAJIT_PROFILER_H

#define HOT_THRESHOLD 100

typedef struct {
    int* pc_counters;
    int max_pc;
} Profiler;

void initProfiler(Profiler* profiler, int max_pc);
int recordExecution(Profiler* profiler, int pc);
void freeProfiler(Profiler* profiler);

#endif
