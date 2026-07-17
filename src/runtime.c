#include "../include/runtime.h"

Value numberValue(double n) {
    Value val;
    val.type = VAL_NUMBER;
    val.as.number = n;
    return val;
}
