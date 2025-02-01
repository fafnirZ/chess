#pragma once
#include "engine/tile.hpp"
#include <array>


namespace Engine {

class Tile; // forward ref

class Board {
public:
    static constexpr int size = 8; // board constant
    Board();
    void initBoard();
    void printBoard();

    std::array<Engine::Tile, 8> backRowStartingOrientationOne();
    std::array<Engine::Tile, 8> backRowStartingOrientationTwo();
private:
    // 2d array
    std::array<std::array<Engine::Tile*,8>, 8> m_state;
};
} // namespace Engine
