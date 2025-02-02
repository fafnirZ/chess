#include "engine/board.hpp"
#include "engine/tile.hpp"
#include <iostream>
#include <memory>

using namespace std;
// using namespace Engine;
// using namespace Engine::Pieces;


namespace Engine {

// constructor
Board::Board() {
    initBoard();
}

// private init board fn.
void Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    
    
}

array<
    unique_ptr<IPiece>, 8
> Board::backRowStartingOrientationOne(Colour colour) {
    // R N B Q K B N R
    auto row = 0;
    return array<unique_ptr<IPiece>,8> {
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

array<
    unique_ptr<IPiece>, 8
> Engine::Board::backRowStartingOrientationOne(Colour colour) {
    // TODO.
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

} // namespace Engine