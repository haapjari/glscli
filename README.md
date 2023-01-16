# glscli

Command Line Interface for Glass Generator (https://github.com/haapjari/glsgen).

---

## Structure

- `bin`: Containes the compiled .dll file, or the executable binary.
- `include`: Folder that contains the publicly distributed .h (header files) for a library to be included in another application, required to use library or DLL.
- `lib`: Statically linkable .lib files (precompiled code) and is part of a library.
- `doc`: Documentation.
- `build`: Build scripts, and other code that is required in the compilation process.
- `src`: Source.
- `data`: Sample or test data, which is accessed by the application in the `bin` folder.
- `examples`: Some libraries come with a set of applications, that test out various units of the "system" and also demonstrate usage.
- `contrib`: "user-contributed snippets"

---

## How-to-Run

- Project uses `C++ 17` -standard. Prerequisites: `make`, `g++`
- Compile: `make compile`
- Run: `make run`
- Run, with Valgrind: `make valgrind`

Example: `./bin/glscli --help ` for help with the usage.

---

## To Do

- Command Line Interface, which reads an input .csv --file and generates a report from it.

---
