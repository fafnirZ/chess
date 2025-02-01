#include "engine/board.hpp"
#include "engine/tile.hpp"
#include <iostream>
#include <memory>

using namespace std;
using namespace Engine;
using namespace Engine::Pieces;


namespace Engine {

Board::Board() {
    initBoard();
}

// private init board fn.
void Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    
    
}

array<
    unique_ptr<Piece>, 8
> backRowStartingOrientationOne(Colour colour) {
    // R N B Q K B N R
    auto row = 0;
    return array<unique_ptr<Piece>,8> {
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
        std::make_unique<Pawn>(Pawn(colour)),
    };
}


// debug
void Board::printBoard() {
    for(int row_n = 0; row_n < size; ++row_n) {
        for(int col_n = 0; col_n < size; ++col_n) {
            auto tile = m_state[row_n][col_n];
            if (tile->getMember() == nullptr) {
                cout << "X";
            }
            // TODO
        }
        cout << "\n";
    }
}

}