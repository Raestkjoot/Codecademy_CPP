#pragma once
#include "cell.hpp"

class Board {
    enum board_state {game_running, cross_win, circle_win, tie};
    int board_size = 9;
    Cell board[9];
    Cell check_game_won();
    Cell check_rows();
    Cell check_columns();
    Cell check_diagonals();
    bool check_game_tied();

    public:
        Board();
        void print_board();
        bool set_cell(int coord, Cell c);
        bool is_game_running();
};