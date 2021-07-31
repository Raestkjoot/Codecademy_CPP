#include <iostream>
#include "cell.hpp"

using namespace std;

// Returns char corresponding to enum type. Useful for printing.
char get_char(Cell c){
    switch (c)
    {
    case Empty:
        return '_';
        break;
    case Circle:
        return 'O';
        break;
    case Cross:
        return 'X';
        break;
    default:
        cout << "Error in getting cell value.\n";
        return 'E';
        break;
    }
}