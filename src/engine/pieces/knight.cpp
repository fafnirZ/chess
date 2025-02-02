#include "engine/pieces/piece.hpp"
#include "engine/board.hpp"

// Constructor
Engine::Pieces::Knight::Knight(Colour colour) 
    : IPiece(colour) {}  // Use initializer list

bool Engine::Pieces::Knight::operator==(std::nullptr_t) const{
    return this == nullptr;
}

void Engine::Pieces::Knight::move(
    Engine::Board* board,
    std::tuple<int, int> new_position
) {
    //todo
}

std::vector<std::tuple<int, int>> Engine::Pieces::Knight::getAllMovablePositions(
    std::tuple<int,int> curr_position
) {
    //todo
    return std::vector<std::tuple<int,int>>();
}


char Engine::Pieces::Knight::getPieceSymbol() {
    return 'N';
}