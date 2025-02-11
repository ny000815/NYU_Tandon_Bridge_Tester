# Week 5 Tester

## Overview
This tester is designed for the Week 5 homework C++ programs. In particular, the Q2 tester requires the `faketime` command and may not work as expected due to the use of random numbers.

## Prerequisites
- **C++ Compiler** (e.g., g++)
- **Make**
- **faketime** (for Q2 testing)
  - On macOS (using Homebrew):
    ```bash
    brew install libfaketime
    ```

## How to Use

### 1. Compile the Tester
Run the following command to compile the program:
```bash
make -f Makefile.q2_env
```

### 2. Run the Tests
Execute the tests using:
```bash
make -f Makefile.q2_env test
```
This command runs the tests in a controlled environment where the SEED environment variable is set (inside a subshell) to ensure reproducible results.

### 3. Clean Up
To remove compiled binaries and temporary test output files, run:
```bash
make -f Makefile.q2_env clean
```

## Execution Example
![alt](../images/w5-0.png)

![alt](../images/w5-1.png)

![alt](../images/w5-2-1.png)

![alt](../images/w5-2-2.png)


