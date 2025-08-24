# Sudoku-Project
A C++ implementation of a fully functional Sudoku game engine. The project is modular, using object-oriented design, and demonstrates key concepts like backtracking algorithms, file handling, and random puzzle generation.


# 🧩 Sudoku Project

A C++ implementation of a Sudoku game that includes a **Solver** and **Generator**, built with object-oriented design principles.  
This project demonstrates backtracking algorithms, board validation, puzzle generation, and modern C++ practices.

---

## 📖 Features
- ✅ **Sudoku Solver** – Solves any valid Sudoku puzzle using backtracking.  
- 🎲 **Sudoku Generator** – Creates a complete Sudoku solution and removes cells to generate puzzles of different difficulty levels.  
- 🔍 **Validation** – Ensures Sudoku rules are followed (row, column, subgrid).  
- 🛠️ **Extendable** – Project structured for adding advanced solving strategies (locked candidates, naked pairs, etc.).  
- 📂 **File I/O Support** – Load puzzles from text files and export results.  

---

## 🏗️ Project Structure
Sudoku-Project/
│── CMakeLists.txt # Build configuration
│── include/ # Header files
│ ├── SudokuBoard.hpp
│ ├── SudokuSolver.hpp
│ └── SudokuGame.hpp
│── src/ # Source code
│ ├── main.cpp
│ ├── SudokuBoard.cpp
│ ├── SudokuSolver.cpp
│ └── SudokuGame.cpp
│── Sudoku_Example/ # Example input puzzles
│ └── puzzle1.txt
└── README.md # Project documentation