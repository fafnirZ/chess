#pragma once

#include "engine/piece.hpp"
namespace Engine {

class Tile {
public:
    int row, col;
    Engine::Pieces::Piece member;
};
};