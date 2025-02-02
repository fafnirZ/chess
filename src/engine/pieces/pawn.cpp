#include "engine/pieces/piece.hpp"
#include "engine/board.hpp"

// Constructor
Engine::Pieces::Pawn::Pawn(Colour colour) 
    : IPiece(colour) {}  // Use initializer list

bool Engine::Pieces::Pawn::operator==(std::nullptr_t) const{
    return this == nullptr;
}

void Engine::Pieces::Pawn::move(
    Engine::Board* board,
    std::tuple<int, int> new_position
) {
    //todo
}

std::vector<std::tuple<int, int>> Engine::Pieces::Pawn::getAllMovablePositions(
    std::tuple<int,int> curr_position
) {
    //todo
    return std::vector<std::tuple<int,int>>();
}