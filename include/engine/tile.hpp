#pragma once

#include "engine/piece.hpp"
namespace Engine {

class Tile {
public:
    Engine::Pieces::Piece* member; // needs to be a pointer

    // initialises member as null pointer
    Tile()
        : member(nullptr) {}; // member initialiser list syntax
    
    void assignMember(Engine::Pieces::Piece* member);
};
} // namespace Engine