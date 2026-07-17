# Lua JIT

An experimental, high-performance Just-In-Time (JIT) compiler for the Lua programming language.

## Motivation

Lua is a powerful, efficient, lightweight, embeddable scripting language. This project aims to bring JIT compilation capabilities to Lua by implementing a trace-based compiler, inspired by the architecture of LuaJIT.

## Goals

- **Performance:** Achieve significant speedups over standard Lua interpretation.
- **Compatibility:** Aim for Lua 5.1 compatibility.
- **Portability:** Design for cross-platform support (x86_64, ARM64).
- **Educational:** Serve as a practical study on JIT compilation techniques.

## Roadmap

This project is structured in 9 phases:

1. [x] Architecture & Project Setup
2. [x] Frontend (Lexer & Parser)
3. [x] Bytecode Generation
4. [ ] Interpreter (VM)
5. [ ] Profiler & Trace Collector
6. [ ] Trace JIT Compiler (Frontend)
7. [ ] Machine Code Generation (Backend)
8. [ ] Runtime Support & Optimizations
9. [ ] Verification, Documentation, & Finalization

## Current Status

We have completed Phase 3: Bytecode Generation. 

### Updates
- Structured project with `src/` and `include/` directories.
- Implemented basic Lexer.
- Implemented basic Parser and AST.
- Defined bytecode instruction set (`include/opcode.h`).
- Implemented basic compiler to emit bytecode (`src/compiler.c`).

## Contributing

Contributions are welcome! Please check the issues tracker for tasks.
