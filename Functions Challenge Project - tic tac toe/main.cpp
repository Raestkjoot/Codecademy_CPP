//CPP files: main.cpp cell.cpp board.cpp player.cpp

#include <iostream>
#include "cell.hpp"
#include "board.hpp"
#include "player.hpp"

using namespace std;

Board board;
Player player1(board, Cross);
Player player2(board, Circle);

int main() {
    cout << "\nWelcome to tic tac to-to-to-to-toe!\n";
    cout << "To play, select a cell by inputting a number between 1-9\n";
    printf("\t%c|%c|%c\n", '1', '2', '3');
    printf("\t%c|%c|%c\n", '4', '5', '6');
    printf("\t%c|%c|%c\n", '7', '8', '9');
    cout << "=====================\n";

    board.print_board();

    //Game Loop
    while(board.is_game_running()) {
        cout << "Player 1 (X)\n";
        player1.get_input();

        board.print_board();
        if(!board.is_game_running()) {break;}

        cout << "Player 2 (O)\n";
        player2.get_input();

        board.print_board();
    }
    return 0;
}