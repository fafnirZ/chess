#pragma once
#include <memory>
#include <array>
// #include "engine/tile.hpp"
// #include "engine/pieces/piece.hpp"
#include "engine/pieces/colour.hpp"


namespace Engine {

// start forward refs
class Tile;
namespace Pieces {
    class IPiece; 
    // enum Colour;
}
// end forward refs


class Board {
public:
    static constexpr int size = 8; // board constant
    Board();
    void initBoard();
    void printBoard();

    // to swap tile refs 
    std::array<std::unique_ptr<Pieces::IPiece>, 8> backRowStartingOrientationOne(Pieces::Colour colour);
    std::array<std::unique_ptr<Pieces::IPiece>, 8> backRowStartingOrientationTwo(Pieces::Colour colour);
private:
    // 2d array
    std::array<std::array<Engine::Tile*,8>, 8> m_state;
};
} // namespace Engine
