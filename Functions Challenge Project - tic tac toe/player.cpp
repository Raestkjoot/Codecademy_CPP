#include "player.hpp"
#include "board.hpp"
#include "cell.hpp"
#include <iostream>
#include <limits>

using namespace std;

Player::Player(Board &board, Cell cell)
    : _board(board), _cell(cell){}

// Get int between 1-9 from player and set corresponding cell to the given cell argument.
void Player::get_input() {
    int input;
    cout << "Input: ";
    cin >> input;
    while(true) {
        if(!cin) {
            cout << "Invalid input. Must be an integer.\n";
        } else if(input < 1 || input > 9) {
            cout << "Invalid input. Must be a number between 1-9.\n";
        } else if(!_board.set_cell(input, _cell)) {
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