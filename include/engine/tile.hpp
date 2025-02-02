#pragma once
#include <memory>

// Forward References
namespace Engine {
    namespace Pieces {
        class IPiece; // forward ref
    }
}
// end Forward References

namespace Engine {

// essentially the container for either
// a null pointer or a piece.
class Tile {
public:

    // constructors 
    Tile();
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
    
    Engine::Pieces::IPiece& getMember();

protected:
    std::unique_ptr<Engine::Pieces::IPiece> m_member; // needs to be a pointer
};
} // namespace Engine