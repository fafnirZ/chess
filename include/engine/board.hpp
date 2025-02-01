#pragma once
#include "engine/tile.hpp"
namespace Engine {

class Board {
public:
    static constexpr int size = 8; // board constant
    Board();
    void initBoard();
private:
    Engine::Tile state[size][size];
};
} // namespace Engine
