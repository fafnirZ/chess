#pragma once

#include "engine/pieces/piece.hpp"
#include <memory>
namespace Engine {

namespace Pieces {
    class IPiece; // forward ref
}

// essentially the container for either
// a null pointer or a piece.
class Tile {
public:

    // initialises member as null pointer
    Tile()
        :m_member(nullptr) {}; // member initialiser list syntax
        
    Tile(std::unique_ptr<Engine::Pieces::IPiece> member);
    //////////////////////////////////////////////////////////////
    // need to prevent copy constructor
    // since Tile has a unique_ptr, it means Tile cannot 
    // be copiable-unless we deep-copy it.
    // in current scenario I'm just gonna delete it.
    /////////////////////////////////////////////////////////////
    Tile(const Tile&) = delete; // prevents copying explicitly

    ////////////////////
    // setter getters
    ////////////////////
    void assignMember(std::unique_ptr<Engine::Pieces::IPiece> member);
    const Engine::Pieces::IPiece& getMember() const;



protected:
    std::unique_ptr<Engine::Pieces::IPiece> m_member; // needs to be a pointer
};
} // namespace Engine