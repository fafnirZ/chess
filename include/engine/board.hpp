#pragma once
#include <memory>
#include <vector>
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
    std::vector<std::unique_ptr<Pieces::IPiece>> backRowStartingOrientationOne(Pieces::Colour colour);
    // std::vector<std::unique_ptr<Pieces::IPiece>> backRowStartingOrientationTwo(Pieces::Colour colour);

private:
    // 2d vector
    std::vector<std::vector<std::unique_ptr<Engine::Tile>>> m_state;
};
} // namespace Engine
