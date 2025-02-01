#include "engine/board.hpp"
#include <iostream>

using namespace std;

namespace Engine {

Board::Board() {
    initBoard();
}

// private init board fn.
void Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    
    
}

void Board::printBoard() {
    for(int row_n = 0; row_n < size; ++row_n) {
        for(int col_n = 0; col_n < size; ++col_n) {
            auto tile = state[row_n][col_n];
            if (tile.member == nullptr) {
                cout << "X";
            }
            // TODO
        }
        cout << "\n";
    }
}

}