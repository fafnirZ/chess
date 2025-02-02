#include "engine/pieces/piece.hpp"
#include "engine/board.hpp"



namespace Engine {

class Board; // forward ref
namespace Pieces {


bool Pawn::operator==(std::nullptr_t) const{
    return this == nullptr;
}

void Pawn::move(
    Engine::Board* board,
    std::tuple<int, int> new_position
) {
    //todo
}

std::vector<std::tuple<int, int>> Pawn::getAllMovablePositions(
    std::tuple<int,int> curr_position
) {
    //todo
    return std::vector<std::tuple<int,int>>();
}

} // namespace pieces
} // namespace engine