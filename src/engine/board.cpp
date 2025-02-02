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

// private init board fn.
void Engine::Board::initBoard() {
    
    // NOTE hardcoding black on top and white on bottom first;
    cout << "hello";
    
}


// vector<std::unique_ptr<Engine::Pieces::IPiece>> Engine::Board::backRowStartingOrientationOne(Engine::Pieces::Colour colour) {
//     // R N B Q K B N R
//     // NOTE: std::make_unique<>(**constructor_args)
//     // memory allocates and constructs the object.

//     vector<std::unique_ptr<Engine::Pieces::IPiece>> pieces;

//     // NOTE initialiser list requires copy constructor 
//     // to be implemented to work
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));
//     pieces.push_back(std::make_unique<Engine::Pieces::Pawn>(colour));

//     return pieces;
// }

// vector<std::unique_ptr<Engine::Pieces::IPiece>> Engine::Board::backRowStartingOrientationTwo(Engine::Pieces::Colour colour) {
//     // TODO reserve space.
//     // TODO need logic for choosing opposite colour
//     auto orientationOne = Engine::Board::backRowStartingOrientationOne(colour);
//     return std::reverse(orientationOne.begin(), orientationOne.end());
// }


// debug
void Engine::Board::printBoard() {
    
    // for(int row_n = 0; row_n < size; ++row_n) {
    //     for(int col_n = 0; col_n < size; ++col_n) {
    //         auto tile = m_state[row_n][col_n];
    //         Engine::Pieces::IPiece* tileMember = tile->getMember();
    //         if (tileMember == nullptr) {
    //             cout << "X";
    //         }
    //         // TODO
    //     }
    //     cout << "\n";
    // }
}

