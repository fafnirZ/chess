#include "engine/board.hpp"
#include <iostream>

int main() {
    std::cout << "OH";
    auto board = Engine::Board();
    // Engine::Board board;
    board.printBoard();
    return 0;
}