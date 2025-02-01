#include "engine/board.hpp"
#include "engine/tile.hpp"
#include <iostream>
#include <memory>

using namespace std;
using namespace Engine;

namespace Engine {

Board::Board() {
    initBoard();
}

// private init board fn.
void Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    
    
}

array<
    unique_ptr<Engine::Pieces::Piece>, 8
> backRowStartingOrientationOne() {
    // R N B Q K B N R
    return {
        Pawn()
    };
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