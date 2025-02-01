#include "engine/pieces/piece.hpp"

namespace Engine {
namespace Pieces {

Pawn::~Pawn() override {
    // does nothing
}

bool Pawn::operator==(std::nullptr_t) const override {
    return this == nullptr;
}

void Pawn::move(
    Engine::Board* board,
    std::tuple<int, int> new_position
) override {
    //todo
}

std::vector<std::tuple<int, int>> Pawn::getAllMovablePositions(
    std::tuple<int,int> curr_position
) override {
    //todo
}

} // namespace pieces
} // namespace engine