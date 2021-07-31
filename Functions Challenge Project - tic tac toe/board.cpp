#include <iostream>
#include <limits>
#include "cell.hpp"
#include "board.hpp"


using namespace std;


// Constructor
Board::Board() {
    for(int i = 0; i < board_size; i++) {
        board[i] = Empty;
    }
}

// Prints board to terminal
void Board::print_board(){
    printf("\t%c|%c|%c\n", get_char(board[0]), get_char(board[1]), get_char(board[2]));
    printf("\t%c|%c|%c\n", get_char(board[3]), get_char(board[4]), get_char(board[5]));
    printf("\t%c|%c|%c\n\n", get_char(board[6]), get_char(board[7]), get_char(board[8]));
}

// Sets char in cell to be c at input coordinate. returns false if cell is already marked.
bool Board::set_cell(int coord, Cell c) {
    if(board[coord - 1] == Empty) {
        board[coord - 1] = c;
        return true;
    }
    return false;
}

// Check if game has ended.
bool Board::is_game_running() {
    Cell winner = check_game_won();
    if(winner == Cross) {
        cout << "Player 1 (X) wins!\n";
        return false;
    } else if(winner == Circle){
        cout << "!Player 2 (O) wins!\n";
        return false;
    }
    if(check_game_tied()) {
        return false;
    }

    return true;
}


Cell Board::check_game_won() {
    Cell row = Board::check_rows();
    if(row != Empty) { return row; }
    Cell col = Board::check_columns();
    if(col != Empty) { return col; }
    Cell dia = Board::check_diagonals();
    if(dia != Empty) { return dia; }
    return Empty;
}

Cell Board::check_rows() {
    if(board[0] == board[1] && board[1] == board[2]) {
        return board[0];
    }
    if(board[3] == board[4] && board[4] == board[5]) {
        return board[3];
    }
    if(board[6] == board[7] && board[7] == board[8]) {
        return board[6];
    }
    return Empty;
}
Cell Board::check_columns() {
    if(board[0] == board[3] && board[3] == board[6]) {
        return board[0];
    }
    if(board[1] == board[4] && board[4] == board[7]) {
        return board[1];
    }
    if(board[2] == board[5] && board[5] == board[8]) {
        return board[2];
    }
    return Empty;
}
Cell Board::check_diagonals() {
    if(board[0] == board[4] && board[4] == board[8]) {
        return board[0];
    }
    if(board[2] == board[4] && board[4] == board[6]) {
        return board[2];
    }
    return Empty;
}

bool Board::check_game_tied() {
    for(int i = 0; i < board_size; i++) {
        if(board[i] == Empty) {
            return false;
        }
    }
    cout << "Game tied!\n";
    return true;
}