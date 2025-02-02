#include "engine/pieces/piece.hpp"
#include "engine/board.hpp"

// Constructor
Engine::Pieces::Bishop::Bishop(Colour colour) 
    : IPiece(colour) {}  // Use initializer list

bool Engine::Pieces::Bishop::operator==(std::nullptr_t) const{
    return this == nullptr;
}

void Engine::Pieces::Bishop::move(
    Engine::Board* board,
    std::tuple<int, int> new_position
) {
    //todo
}

std::vector<std::tuple<int, int>> Engine::Pieces::Bishop::getAllMovablePositions(
    std::tuple<int,int> curr_position
) {
    //todo
    return std::vector<std::tuple<int,int>>();
}


char Engine::Pieces::Bishop::getPieceSymbol() {
    return 'B';
}