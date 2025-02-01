#pragma once

#include "engine/piece.hpp"
namespace Engine {

class Tile {
public:
    int row, col;
    Engine::Pieces::Piece* member; // needs to be a pointer
    Tile(): member(nullptr) {} // member initialiser list syntax
};
};