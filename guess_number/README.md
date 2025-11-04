# Number Guessing Game

## Description
A simple guessing game where the player tries to guess a randomly generated number between 1 and 100.

## How it Works
- Uses C++ random library to generate a random number
- Provides feedback if guess is too high or too low
- Continues until the correct number is guessed
- Uses modern random number generation (mt19937)

## Features
- Random number generation between 1-100
- Interactive feedback system
- Unlimited attempts
- Modern C++ random number generator

## Compilation
```bash
g++ guess_number.cpp -o guess_number
```

## Example Output
```
Guess the number (1-100): 50
Too high! Try again: 25
Too low! Try again: 37
Too high! Try again: 31
Too low! Try again: 34
Too high! Try again: 32
Too low! Try again: 33
Correct! You won!
```