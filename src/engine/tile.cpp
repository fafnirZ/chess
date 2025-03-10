#include <memory>
#include "engine/tile.hpp"
#include "engine/pieces/piece.hpp"

// init

// initialises member as null pointer
// cannot use inialise lists
// since they are copy references.
Engine::Tile::Tile() {
    m_member = nullptr;
}

Engine::Tile::Tile(std::unique_ptr<Engine::Pieces::IPiece> member) {
    m_member = std::move(member);
}

std::unique_ptr<Engine::Tile> Engine::Tile::clone() const {
    return make_unique<Engine::Tile>(m_member);
}

// reference but not owned
Engine::Pieces::IPiece* Engine::Tile::getMember() {
    return m_member.get(); // returns raw pointer or null ptr
}


