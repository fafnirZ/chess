#include <memory>
#include "engine/tile.hpp"

// init

// initialises member as null pointer
Engine::Tile::Tile()
    :m_member(nullptr) {}; // member initialiser list syntax

Engine::Tile::Tile(std::unique_ptr<Engine::Pieces::IPiece> member) {
    member = std::move(member);
}

// reference but not owned
Engine::Pieces::IPiece& Engine::Tile::getMember() {
    return *m_member;
}
