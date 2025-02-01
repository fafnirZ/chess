#pragma once
#include "engine/tile.hpp"
namespace Engine {

int size = 8;
class Board {
public:
    Board();
    void initBoard();
private:
    (Engine::Tile)[size][size] state;
};
