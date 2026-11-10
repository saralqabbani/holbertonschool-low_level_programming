
# Simple Calculator

## Description
A simple calculator program written in C.

## Features
- Displays a welcome message and menu.
- Supports addition.
- Supports subtraction.
- Supports multiplication.
- Supports division.
- Validates user choices.
- Repeats the menu until the user chooses 0.
- Handles division by zero safely.
- Supports decimal numbers.

## Compilation
Compile the program using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Usage
Run the program:

```bash
./calculator
```

Choose an operation from the menu:

- 1: Add
- 2: Subtract
- 3: Multiply
- 4: Divide
- 0: Quit

## Number Type

The calculator uses `double` for all arithmetic operations.
This supports decimal inputs and division results.

Division by zero displays:

```text
Error: division by zero
```
