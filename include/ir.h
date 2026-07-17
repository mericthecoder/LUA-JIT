#ifndef LUAJIT_IR_H
#define LUAJIT_IR_H

typedef enum {
    IR_LOAD,
    IR_STORE,
    IR_ADD,
    IR_PHI
} IROp;

typedef struct {
    IROp op;
    int dest;
    int src1;
    int src2;
} IRInstruction;

#endif
