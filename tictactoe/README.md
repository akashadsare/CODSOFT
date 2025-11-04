# Tic-Tac-Toe Game

## Description
A console-based two-player Tic-Tac-Toe game with replay functionality.

## How it Works
- 3x3 grid represented by a 2D character array
- Players alternate between X and O
- Input positions 1-9 corresponding to grid positions
- Checks for wins (rows, columns, diagonals) and draws
- Option to play multiple rounds

## Features
- Two-player gameplay
- Win detection for rows, columns, and diagonals
- Draw detection
- Input validation
- Play again functionality
- Board reset between games

## Compilation
```bash
g++ tictactoe.cpp -o tictactoe
```

## Example Output
```
1 2 3 
4 5 6 
7 8 9 
Player X, enter position (1-9): 5
1 2 3 
4 X 6 
7 8 9 
Player O, enter position (1-9): 1
O 2 3 
4 X 6 
7 8 9 
Player X, enter position (1-9): 3
O 2 X 
4 X 6 
7 8 9 
Player O, enter position (1-9): 7
O 2 X 
4 X 6 
O 8 9 
Player X, enter position (1-9): 7
Invalid move!
Player X, enter position (1-9): 9
O 2 X 
4 X 6 
O 8 X 
Player X wins!
Play again? (y/n): n
```