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

## Installation & Building

### Prerequisites
- GCC (GNU Compiler Collection) must be installed and in your system PATH.
- `make` must be installed.

### Build Instructions

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/mericthecoder/LUA-JIT.git
    cd LUA-JIT
    ```

2.  **Compile the project:**
    Simply run `make` in the root directory:
    ```bash
    make
    ```
    This will compile all source files in the `src/` directory and generate the `luajit_dev` executable.

### Manual Compilation (Alternative)
If you do not have `make`, you can compile manually using GCC:
```bash
gcc -Iinclude src/*.c -o luajit_dev
```

## Usage

After successfully building the project, execute the compiler:

```bash
./luajit_dev
```

## Contributing

Contributions are welcome! Please feel free to submit pull requests or open issues for bugs, feature requests, or improvements.

## Status

Project development finalized.
