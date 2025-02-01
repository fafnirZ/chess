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
class Piece {
public:
    // Constructor that initializes the piece with a position
    Piece(Colour colour) 
        : colour(colour) {}
    // Virtual destructor for proper cleanup when deleting via base class pointer
    virtual ~Piece() = default;

    // comparison against null ptr;
    bool operator==(std::nullptr_t) const {
        // assuming "this" is ptr to object
        return this==nullptr;
    }

    // Pure virtual functions for derived classes to implement
    virtual void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) = 0;

    virtual std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) = 0;


protected:
    Colour colour;  // Colour of the piece
};

// Derived classes
class Pawn : public Piece {
public:
    // Constructor
    Pawn(Colour colour) 
        : Piece(colour) {}  // Use initializer list

    // Destructor
    ~Pawn() override {
        // Cleanup code for Pawn (if needed)
    }

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Rook : public Piece {
public:
    // constructor
    Rook(Colour colour) 
        : Piece(colour) {}  // Use initializer list
    //destructor
    ~Rook() override {
        // Cleanup code for Pawn (if needed)
    }

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Bishop : public Piece {
public:
    //constructor
    Bishop(Colour colour) 
        : Piece(colour) {}  // Use initializer list
    //destructor
    ~Bishop() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class King : public Piece {
public:
    //constructor
    King(Colour colour) 
        : Piece(colour) {}  // Use initializer list
    //destructor
    ~King() override {
        // Cleanup code for Pawn (if needed)
    }

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Queen : public Piece {
public:
    // constructor
    Queen(Colour colour) 
        : Piece(colour) {}  // Use initializer list
    // destructor
    ~Queen() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

class Knight : public Piece {
public:
    // constructor
    Knight(Colour colour) 
        : Piece(colour) {}  // Use initializer list
    // destructor
    ~Knight() override {
        // Cleanup code for Pawn (if needed)
    }

    void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) override;

    std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) override;
};

} // namespace Pieces
} // namespace Engine