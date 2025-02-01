#include <engine/tile.hpp>
#include <memory>

namespace Engine {

// init
Tile::Tile(std::unique_ptr<Engine::Pieces::IPiece> member) {
    member = std::move(member);
}

// reference but not owned
const Engine::Pieces::IPiece& Tile::getMember() const {
    return *m_member;
}

}