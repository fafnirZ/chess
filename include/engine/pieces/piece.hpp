#pragma once

#include <string>
#include <tuple>
#include <vector>
#include "engine/board.hpp"

namespace Engine {

class Board; // forward referencing

namespace Pieces {

enum Colour {
    BLACK,
    WHITE,
};

// interface
// Abstract base class for pieces
class IPiece {
public:
    // // Constructor that initializes the Ipiece with a position
    // IPiece(Colour colour) 
    //     : colour(colour) {}
    // Virtual destructor for proper cleanup when deleting via base class pointer
    virtual ~IPiece() = default;

    virtual bool operator==(std::nullptr_t) const = 0;

    // Pure virtual functions for derived classes to implement
    virtual void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) = 0;

    virtual std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) = 0;

};


class BasePiece {
public:
    // Constructor that initializes the BasePiece with colour
    BasePiece(Colour colour) 
        : colour(colour) {}

protected:
    Colour colour;  // Colour of the Piece
};

// Derived classes
class Pawn : public IPiece, public BasePiece {
public:
    // Constructor
    Pawn(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list

    // Destructor
    ~Pawn() override {
        // Cleanup code for Pawn (if needed)
    }

    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Rook : public BasePiece, public IPiece {
public:
    // constructor
    Rook(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list
    //destructor
    ~Rook() override {
        // Cleanup code for Pawn (if needed)
    }
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Bishop : public BasePiece, public IPiece {
public:
    //constructor
    Bishop(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list
    //destructor
    ~Bishop() override {
        // Cleanup code for Pawn (if needed)
    }
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class King : public BasePiece, public IPiece {
public:
    //constructor
    King(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list
    //destructor
    ~King() override {
        // Cleanup code for Pawn (if needed)
    }
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Queen : public BasePiece, public IPiece {
public:
    // constructor
    Queen(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list
    // destructor
    ~Queen() override {
        // Cleanup code for Pawn (if needed)
    }
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Knight : public BasePiece, public IPiece {
public:
    // constructor
    Knight(Colour colour) 
        : BasePiece(colour) {}  // Use initializer list
    // destructor
    ~Knight() override {
        // Cleanup code for Pawn (if needed)
    }
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const override;
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

} // namespace IPieces
} // namespace Engine