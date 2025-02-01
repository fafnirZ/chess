#pragma once

namespace Engine {

class BoardConstants {
public:
    int width = 8;
    int height = 8;
};

class Board {
public:
    Board();
private:
    void initBoard();
};
};
