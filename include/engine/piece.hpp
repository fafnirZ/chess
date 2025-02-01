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
// Abstract base class for pieces
class Piece {
public:
    // Constructor that initializes the piece with a position
    Piece(std::tuple<int, int> position, Colour colour) 
        : curr_position(position), colour(colour) {}

    // Pure virtual functions for derived classes to implement
    virtual void move(std::tuple<int, int> new_position) = 0;
    virtual std::tuple<int, int> getPos() = 0;
    virtual std::vector<std::tuple<int, int>> getAllMovablePositions() = 0;

    // Virtual destructor for proper cleanup when deleting via base class pointer
    virtual ~Piece() = default;

protected:
    std::tuple<int, int> curr_position;  // Position of the piece
    Colour colour;  // Colour of the piece
};

// Derived classes
class Pawn : public Piece {
public:
    // Constructor
    Pawn(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list

    // Destructor
    ~Pawn() override {
        // Cleanup code for Pawn (if needed)
    }

    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

class Rook : public Piece {
public:
    // constructor
    Rook(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list
    //destructor
    ~Rook() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

class Bishop : public Piece {
public:
    Bishop(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list
        //destructor
    ~Bishop() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

class King : public Piece {
public:
    King(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list
    //destructor
    ~King() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

class Queen : public Piece {
public:
    // constructor
    Queen(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list
    // destructor
    ~Queen() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

class Knight : public Piece {
public:
    // constructor
    Knight(std::tuple<int, int> position, Colour colour) 
        : Piece(position, colour) {}  // Use initializer list
    // destructor
    ~Knight() override {
        // Cleanup code for Pawn (if needed)
    }
    void move(std::tuple<int, int> new_position) override;
    std::tuple<int, int> getPos() override;
    std::vector<std::tuple<int, int>> getAllMovablePositions() override;
};

} // namespace Pieces
} // namespace Engine