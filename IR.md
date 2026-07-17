# Intermediate Representation (IR)

The JIT will use an SSA-based (Static Single Assignment) IR.

## Structure

An IR sequence consists of instructions:

- `v_result = OPCODE operand1, operand2`

## Example

Lua: `local z = x + y`

IR:
```
v1 = LOAD x
v2 = LOAD y
v3 = ADD v1, v2
STORE z, v3
```
