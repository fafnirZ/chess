#pragma once

#include <string>
#include <tuple>
#include <vector>

namespace Engine {

namespace Pieces {

enum Colour {
    BLACK,
    WHITE,
};

// interface
class Piece {
    enum Colour colour;
public:
    // Virtual functions are only implemented in subclasses.
    // Virtual destructor is still needed for proper polymorphic behavior when the object is deleted via a base class pointer
    // The =0 syntax is to ensure that the function is "pure virtual" meaning derived classes must implement them.
    virtual ~Piece() = default;
    virtual void move(std::tuple<int,int> new_position) const = 0;
    virtual std::tuple<int,int> getPos() = 0;
    virtual std::vector<std::tuple<int,int>> getAllMovablePositions() = 0;

private:
    std::tuple<int,int> curr_position;
};

// actual classes
class Pawn : public Piece {};
class Rook : public Piece {};
class Bishop: public Piece {};
class King : public Piece {};
class Queen : public Piece {};
class Knight : public Piece {};
};
};