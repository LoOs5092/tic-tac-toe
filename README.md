# Tic Tac Toe in C++

## Description
This project is a simple implementation of the classic game Tic Tac Toe in C++. It's designed to be run in the console and played by two players taking turns to mark a space in a 3x3 grid. The goal is to achieve three marks in a horizontal, vertical, or diagonal row.

## Features
- Two-player gameplay on the same computer.
- Simple and intuitive text-based interface.
- Input validation to prevent invalid moves.

## Getting Started

### Prerequisites
- A C++ compiler (GCC, Clang, MSVC, etc.)
- Make (optional, for building)

### Compiling the Game
To compile the Tic Tac Toe game, navigate to the project directory in your terminal and run the following command (assuming you are using `g++`):

```bash
g++ -o TicTacToe TicTacToe.cpp
```
### Running the Game
After compiling, you can start the game by running:

```bash
./TicTacToe
```
## How to Play
- The game is played on a grid that's 3 squares by 3 squares.
- Player 1 is X, and Player 2 is O. Players take turns putting their marks in empty squares.
- The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner.
- When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.

## Contributing
Contributions are welcome! Please feel free to submit pull requests or open issues to improve the game or suggest new features.

## License
This project is open source and available under the [MIT License](LICENSE.md).
