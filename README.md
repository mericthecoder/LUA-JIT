# Lua JIT

An experimental, high-performance Just-In-Time (JIT) compiler for the Lua programming language.

## Motivation

Lua is a powerful, efficient, lightweight, embeddable scripting language. This project aims to bring JIT compilation capabilities to Lua by implementing a trace-based compiler, inspired by the architecture of LuaJIT.

## Roadmap

This project is structured in 9 phases:

1. [x] Architecture & Project Setup
2. [x] Frontend (Lexer & Parser)
3. [x] Bytecode Generation
4. [x] Interpreter (VM)
5. [x] Profiler & Trace Collector
6. [x] Trace JIT Compiler (Frontend)
7. [x] Machine Code Generation (Backend)
8. [x] Runtime Support & Optimizations
9. [x] Verification, Documentation, & Finalization

## Installation

### Prerequisites
- GCC (GNU Compiler Collection)
- Make

### Building the Project
1. Clone the repository:
   ```bash
   git clone https://github.com/mericthecoder/LUA-JIT.git
   cd LUA-JIT
   ```
2. Build the project:
   ```bash
   make
   ```

## Usage
After building, run the generated executable:
```bash
./luajit_dev
```

## Contributing
Contributions are welcome! Please check the issues tracker for tasks.

## Status
Project development finalized.

## Contributing

Contributions are welcome! Please check the issues tracker for tasks.
