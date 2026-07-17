# Lua JIT Architecture

The Lua JIT compiler will follow a classic JIT compilation architecture:

1.  **Frontend:**
    *   Lexer: Tokenizes Lua source code.
    *   Parser: Generates an Abstract Syntax Tree (AST).
2.  **Bytecode Generator:**
    *   Translates AST to bytecode.
3.  **Interpreter (VM):**
    *   Executes bytecode instructions.
4.  **Profiler:**
    *   Identifies hot paths (loops, frequently called functions).
5.  **JIT Compiler (Trace-based):**
    *   Converts trace-based execution paths into SSA-based Intermediate Representation (IR).
    *   Performs optimizations on IR.
6.  **Backend (Code Emitter):**
    *   Generates machine code from optimized IR.
7.  **Runtime:**
    *   Implements Lua object model (tables, functions, strings).
    *   Garbage Collector.
