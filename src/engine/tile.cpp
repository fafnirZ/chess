#include <engine/tile.hpp>
#include <memory>

namespace Engine {

// init
Tile::Tile(std::unique_ptr<Engine::Pieces::Piece> member) {
    member = std::move(member);
}

// reference but not owned
const Engine::Pieces::Piece& Tile::getMember() const {
    return *m_member;
}

}