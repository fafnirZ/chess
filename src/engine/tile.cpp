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
    member = std::move(member);
}

// reference but not owned
Engine::Pieces::IPiece* Engine::Tile::getMember() {
    return m_member.get(); // returns raw pointer or null ptr
}
