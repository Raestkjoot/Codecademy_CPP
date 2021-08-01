#pragma once

#include "board.hpp"
#include "cell.hpp"

class Player {
    Board &_board;
    Cell _cell;

public:
    Player(Board &board, Cell cell);
    void get_input();
};