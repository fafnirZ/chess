#include "engine/board.hpp"
#include "engine/tile.hpp"
#include "engine/pieces/piece.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

using namespace std;

// private init board fn.
// does the following:
// 1. init a full null board of vec<vec<unique_ptr<Tile>>>
// 2. replace ownership using generated pieces.
void Engine::Board::initBoard() {
    initNullBoard();

    // replace top row 
    m_state[0] = std::move(
        backRowStartingOrientationOne(
            Engine::Pieces::Colour::BLACK
        )
    );
    // replace top pawn row
    m_state[1] = std::move(
        entireRowOfPawns(
            Engine::Pieces::Colour::BLACK
        )
    );


    // replace bottom pawn row
    m_state[size-2] = std::move(
        entireRowOfPawns(
            Engine::Pieces::Colour::WHITE
        )
    );

    // replace bottom row
    m_state[size-1] = std::move(
        backRowStartingOrientationOne(
            Engine::Pieces::Colour::WHITE
        )
    );
}

void Engine::Board::initNullBoard() {
    // NOTE hardcoding black on top and white on bottom first;
    auto outer_vec = vector<vector<unique_ptr<Engine::Tile>>>();
    for(int row_n=0; row_n < size; row_n++) {
        auto inner_vec = vector<unique_ptr<Engine::Tile>>();
        for(int col_n=0; col_n <size; col_n++) {
            inner_vec.push_back(
                std::make_unique<Engine::Tile>()
            ); // initialise with nullptr
        }  
        // NOTE: because push_back needs to do a copy
        // we gotta do a std::move instead to transfer ownership
        // transfer ownership to the attribute
        outer_vec.push_back(
            std::move(inner_vec)
        );
    }
    m_state = std::move(outer_vec);
}

vector<std::unique_ptr<Engine::Tile>> Engine::Board::backRowStartingOrientationOne(Engine::Pieces::Colour colour) {
    // R N B Q K B N R
    // NOTE: std::make_unique<>(**constructor_args)
    // memory allocates and constructs the object.
    vector<std::unique_ptr<Engine::Tile>> pieces;

    // NOTE initialiser list requires copy constructor 
    // to be implemented to work
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));

    return pieces;
}


vector<std::unique_ptr<Engine::Tile>> Engine::Board::entireRowOfPawns(Engine::Pieces::Colour colour) {
    // P P P P P P P P
    vector<std::unique_ptr<Engine::Tile>> pieces;

    // NOTE initialiser list requires copy constructor 
    // to be implemented to work
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));
    pieces.push_back(
        std::make_unique<Engine::Tile>(
            std::make_unique<Engine::Pieces::Pawn>(colour)));

    return pieces;
}

