# Simple Calculator

## Description
A basic console calculator that performs arithmetic operations on two numbers.

## How it Works
- Prompts user for two numbers and an operation
- Uses switch statement to perform calculations
- Handles division by zero error
- Supports addition, subtraction, multiplication, and division

## Features
- Basic arithmetic operations (+, -, *, /)
- Error handling for division by zero
- Input validation for operations
- Works with decimal numbers

## Compilation
```bash
g++ calculator.cpp -o calculator
```

## Example Output
```
Enter first number: 15
Enter second number: 3
Choose operation (+, -, *, /): *
Result: 45

Enter first number: 10
Enter second number: 0
Choose operation (+, -, *, /): /
Error: Division by zero

Enter first number: 7.5
Enter second number: 2.5
Choose operation (+, -, *, /): +
Result: 10
```