# Week 6 Tester

## Overview
This tester is designed for the Week 6 homework C++ programs. 
 
> [!WARNING]
> Q2 tester may fail if you have main funciontion in your own cpp file

## Prerequisites
- **C++ Compiler**
- **Make**

## Tester Files Placement
```
.
├── Makefile
├── tests
│   ├── q1-1.expected
│   ├── q1-1.in
│   ├── q1-2.expected
│   ├── q1-2.in
│   ├── ...
├── yn2459_hw6_q1.cpp
├── yn2459_hw6_q2.cpp
├── yn2459_hw6_q3.cpp
└── yn2459_hw6_q4.cpp
```

## How to Use

### 1. Compile & Run the Tester
Run the following command to compile and execute the program:
```bash
make test1
```
```bash
make test2a
```
```bash
make test2b
```

### 3. Clean Up
To remove compiled binaries and temporary test output files, run:
```bash
make clean
```
