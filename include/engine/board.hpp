#pragma once
#include <memory>
#include <vector>
#include "engine/tile.hpp"
#include "engine/pieces/piece.hpp"
#include "engine/pieces/colour.hpp"


// start forward refs
namespace Engine {
    class Tile;
    namespace Pieces {
        class IPiece; 
    }
}
// end forward refs


namespace Engine {
class Board {
public:
    static constexpr int size = 8; // board constant
    Board();
    void initBoard();
    void initNullBoard();
    void printBoard();

    // to swap tile refs 
    // std::vector<std::unique_ptr<Pieces::IPiece>> backRowStartingOrientationOne(Pieces::Colour colour);
    // std::vector<std::unique_ptr<Pieces::IPiece>> backRowStartingOrientationTwo(Pieces::Colour colour);

private:
    // 2d vector
    std::vector<std::vector<std::unique_ptr<Engine::Tile>>> m_state;
};
} // namespace Engine
