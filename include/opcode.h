#ifndef LUAJIT_OPCODE_H
#define LUAJIT_OPCODE_H

typedef enum {
    OP_LOAD_CONST,
    OP_ADD,
    OP_STORE_VAR,
    OP_RETURN
} OpCode;

typedef struct {
    OpCode code;
    int arg1;
    int arg2;
} Instruction;

#endif
