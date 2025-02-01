#pragma once

#include <string>
#include <tuple>
#include <vector>
#include "engine/board.hpp"

namespace Engine {

class Board; // forward referencing

namespace IPieces {

enum Colour {
    BLACK,
    WHITE,
};

// interface
// Abstract base class for pieces
class IPiece {
public:
    // Constructor that initializes the Ipiece with a position
    IPiece(Colour colour) 
        : colour(colour) {}
    // Virtual destructor for proper cleanup when deleting via base class pointer
    virtual ~IPiece() = default;

    // Pure virtual functions for derived classes to implement
    virtual void move(
        Engine::Board* board,
        std::tuple<int, int> new_position
    ) = 0;

    virtual std::vector<std::tuple<int, int>> getAllMovablePositions(
        std::tuple<int,int> curr_position
    ) = 0;


protected:
    Colour colour;  // Colour of the Ipiece
};


class BasePiece {
public:
    // comparison against null ptr;
    bool operator==(std::nullptr_t) const {
        // assuming "this" is ptr to object
        return this==nullptr;
    }
};

// Derived classes
class Pawn : public IPiece, public BasePiece {
public:
    // Constructor
    Pawn(Colour colour) 
        : IPiece(colour) {}  // Use initializer list

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

class Rook : public IPiece, public BasePiece {
public:
    // constructor
    Rook(Colour colour) 
        : IPiece(colour) {}  // Use initializer list
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

class Bishop : public IPiece, public BasePiece {
public:
    //constructor
    Bishop(Colour colour) 
        : IPiece(colour) {}  // Use initializer list
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

class King : public IPiece, public BasePiece {
public:
    //constructor
    King(Colour colour) 
        : IPiece(colour) {}  // Use initializer list
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

class Queen : public IPiece, public BasePiece {
public:
    // constructor
    Queen(Colour colour) 
        : IPiece(colour) {}  // Use initializer list
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

class Knight : public IPiece, public BasePiece {
public:
    // constructor
    Knight(Colour colour) 
        : IPiece(colour) {}  // Use initializer list
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

} // namespace IPieces
} // namespace Engine