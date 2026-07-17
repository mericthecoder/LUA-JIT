#ifndef LUAJIT_RUNTIME_H
#define LUAJIT_RUNTIME_H

typedef enum {
    VAL_NUMBER,
    VAL_STRING,
    VAL_TABLE
} ValueType;

typedef struct {
    ValueType type;
    union {
        double number;
        char* string;
        void* table;
    } as;
} Value;

Value numberValue(double n);

#endif
