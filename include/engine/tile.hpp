#pragma once

#include "engine/piece.hpp"
#include <memory>
namespace Engine {

class Tile {
public:
    std::unique_ptr<Engine::Pieces::Piece> member; // needs to be a pointer

    // initialises member as null pointer
    Tile()
        : member(nullptr) {}; // member initialiser list syntax
    
    void assignMember(std::unique_ptr<Engine::Pieces::Piece> member);
};
} // namespace Engine