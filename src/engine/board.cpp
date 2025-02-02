#include "engine/board.hpp"
#include "engine/tile.hpp"
#include "engine/pieces/piece.hpp"
#include <iostream>
#include <memory>

using namespace std;



// constructor
Engine::Board::Board() {
    initBoard();
}

// private init board fn.
void Engine::Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    
    
}

array<
    unique_ptr<Engine::Pieces::IPiece>, 8
> Engine::Board::backRowStartingOrientationOne(Engine::Pieces::Colour colour) {
    // R N B Q K B N R
    auto row = 0;
    return array<unique_ptr<Engine::Pieces::IPiece>,8> {
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
        std::make_unique<Engine::Pieces::Pawn>(Engine::Pieces::Pawn(colour)),
    };
}

array<
    unique_ptr<Engine::Pieces::IPiece>, 8
> Engine::Board::backRowStartingOrientationTwo(Engine::Pieces::Colour colour) {
    array<unique_ptr<Engine::Pieces::IPiece>,8> result;
    
    // TODO need logic for choosing opposite colour
    auto orientationOne = Engine::Board::backRowStartingOrientationOne(colour);
    for(int i=0; i< 8; i++) {
        auto pieceRef = &orientationOne[size-i];
    }
    return result;
}


// debug
void Engine::Board::printBoard() {
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

