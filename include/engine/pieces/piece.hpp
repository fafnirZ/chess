#pragma once

#include <string>
#include <tuple>
#include <vector>
#include "engine/board.hpp"
#include "engine/pieces/colour.hpp"

namespace Engine {

class Board; // forward referencing

namespace Pieces {

// interface
// Abstract base class for pieces
class IPiece {
public:
    // // Constructor that initializes the Ipiece with a position
    IPiece(Colour colour) 
        : colour(colour) {}
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

    virtual char getPieceSymbol() = 0;

protected:
    Colour colour;  // Colour of the Piece
};



// Derived classes
class Pawn : public IPiece {
public:
    // Constructor
    Pawn(Colour colour);
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

    char getPieceSymbol() override;
};

class Rook : public IPiece {
public:
    // constructor
    Rook(Colour colour);
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

    char getPieceSymbol() override;
};

class Bishop : public IPiece {
public:
    //constructor
    Bishop(Colour colour);
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

    char getPieceSymbol() override;
};

class King : public IPiece {
public:
    //constructor
    King(Colour colour);
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

    char getPieceSymbol() override;
};

class Queen : public IPiece {
public:
    // constructor
    Queen(Colour colour);
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

    char getPieceSymbol() override;
};

class Knight : public IPiece {
public:
    // constructor
    Knight(Colour colour);
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

    char getPieceSymbol() override;
};

} // namespace IPieces
} // namespace Engine