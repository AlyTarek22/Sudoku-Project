#include "../include/SudokuBoard.hpp"
#include "../include/SudokuSolver.hpp"
#include "../include/SudokuGame.hpp"
#include <iostream>

// int main() {
//     SudokuBoard board;
//     SudokuSolver solver;
//     solver.solve(board);

//     // std::cout << "Solved board (before removing cells):\n";
//     // board.printBoard();

//     board.generatePuzzle("hard");
//     board.printBoard();
//     std::cout<<"---------------------------\n";
//     // int row, col, num;
//     // std::cout << "\nEnter row and col and num to insert (0 to quit):\n";
//     // while (true) {
//         //     std::cout << "Enter row (1-9), column (1-9), and value (1-9) ";
//     //     std::cin >> row >> col >> num;
//     //     if (row == 0) break;
//     //     if (solver.isvalid(board, row-1, col-1, num)) {
//         //         std::cout<<"Move accepted! "<<std::endl;
//     //         board.setCell(row-1, col-1, num);
//     //     }
//     //     else {
//     //         std::cout << "Invalid move. That cell might be occupied or the placement breaks Sudoku rules.\n";
//     //     }

//     //     board.printBoard();
//     // }
//     // std::cout << "\nPuzzle (after removing cells):\n";
//     // board.printBoard();

//     SudokuSolver solver2;
//     solver2.solve(board);
//     std::cout<<"---------------------------\n";
//     board.printBoard();

//     // if (solver2.solve(board)) {
//     //     std::cout << "\nPuzzle solved again by solver:\n";
//     //     board.printBoard();
//     // } else {
//     //     std::cout << "No solution found!\n";
//     // }

//     return 0;
// }

int main()
{
    SudokuGame game;
    game.menu();
    
    return 0;
}