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
    std::tuple<int,int> curr_position;
    enum Colour colour;
public:
    void move(std::tuple<int,int> new_position);
    std::vector<std::tuple<int,int>> getAllMovablePositions();
};
};
};