#ifndef LUAJIT_JIT_FRONTEND_H
#define LUAJIT_JIT_FRONTEND_H

#include "compiler.h"
#include "ir.h"

void compileTraceToIR(BytecodeChunk* chunk, int start_pc);

#endif
