#include "engine/piece.hpp"

namespace Engine {
namespace Pieces {

// init
Pawn::~Pawn(
    std::tuple<int,int> position, 
    enum Colour colour,
) override {
    curr_position = position
    colour = colour
}



} // namespace pieces
} // namespace engine