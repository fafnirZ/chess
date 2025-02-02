#include "engine/board.hpp"
#include "engine/tile.hpp"
#include "engine/pieces/piece.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

using namespace std;


// constructor
Engine::Board::Board() {
    initBoard();
}


// debug
void Engine::Board::printBoard() {
    // range based for lloop read only access
    for(const auto& rowRef: m_state) {
        for(const auto& tilePtr: rowRef) {
            Engine::Pieces::IPiece* nullableTileMember = tilePtr->getMember();
            if (nullableTileMember == nullptr) {
                cout << "[ ]";
            } else {
                cout << "[" << nullableTileMember->getPieceSymbol() << "]";
            }
        }
        cout << "\n";
    }
}

