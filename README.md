# 🔵 C Programming Exercises Repository

This repository gathers practical exercises in the **C programming language**, focusing on logical thinking and fundamental-to-intermediate level understanding of the language.

## 📘 About C Language

C is a general-purpose programming language known for its performance and low-level capabilities. It is heavily used in embedded systems, operating systems, compilers, and systems programming. Despite being older, it remains essential in areas where memory and performance control are critical.

## 🎯 Repository Purpose

- Learn programming logic and core structures
- Develop computational thinking
- Study algorithms and data structures
- Serve as a foundation for learning C++, Java, and other languages

## 🎓 Recommended Courses

- [C Programming Course – Curso em Vídeo (Free)](https://www.youtube.com/playlist?list=PLesCEcYj003SwVdufCQM5FIbrOd0GG1M4)
- [Data Structures in C – PUC-Rio / Coursera](https://www.coursera.org/learn/estrutura-de-dados-em-c)
- [Programming in C – USP / Unicamp](https://www.ic.unicamp.br/~marcos/mc102/)
- [C Programming – Harvard CS50](https://cs50.harvard.edu/x/2024/weeks/1/)

## 🚀 How to Execute C Files with GCC

### Compile a C file:

```bash
gcc filename.c -o output_name
```

### Run the compiled program:

```bash
./output_name
```

### Compile and run in one command:

```bash
gcc filename.c -o output_name && ./output_name
```

### Example:

```bash
# Compile
gcc exercises/ex001-hello_world/helloworld.c -o helloworld

# Run
./helloworld

# Or compile and run together
gcc exercises/ex001-hello_world/helloworld.c -o helloworld && ./helloworld
```

### Useful GCC flags:

- `-g` - Include debugging information
- `-Wall` - Show all warnings
- `-O2` - Optimize code for performance
- `-std=c99` - Use C99 standard

Example with flags:

```bash
gcc -Wall -std=c99 filename.c -o output_name
```
