//CPP files: main.cpp board.cpp cell.cpp

#include <iostream>
#include <limits>
#include "cell.hpp"
#include "board.hpp"

using namespace std;

Board board;
void get_input(Cell c);

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
        get_input(Cross);

        board.print_board();
        if(!board.is_game_running()) {break;}

        cout << "Player 2 (O)\n";
        get_input(Circle);

        board.print_board();
    }
    return 0;
}

// Get int between 1-9 from player and set corresponding cell to the given cell argument.
void get_input(Cell c) {
    int input;
    cout << "Input: ";
    cin >> input;
    while(true) {
        if(!cin) {
            cout << "Invalid input. Must be an integer.\n";
        } else if(input < 1 || input > 9) {
            cout << "Invalid input. Must be a number between 1-9.\n";
        } else if(!board.set_cell(input, c)) {
            cout << "That cell is already occupied.\n";
        } else { //Break loop if cell is succesfully set to X/O.
            break;
        }
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Input: ";
        cin >> input;
    }
}