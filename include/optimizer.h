#ifndef LUAJIT_OPTIMIZER_H
#define LUAJIT_OPTIMIZER_H

#include "ir.h"

void optimizeIR(IRInstruction* code, int count);

#endif
