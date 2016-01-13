#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

#include "History.h"
#include "Game.h"
#include "Arena.h"

History::History(int nRows, int nCols): m_nRows(nRows), m_nCols(nCols)
{
    //construct history grid
    for (int r = 0; r < nRows; r++) {
        for (int c = 0; c < nCols; c++) {
            grid[r][c] = '.';
        }
    }
} //History ctor definition

bool History::record(int r, int c) {
    if(r > m_nRows || c > m_nCols) //check bounds
        return false;
    else {
        switch(grid[r][c]) { //if '.', change to 'A' when you check the slot
            case '.': {
                grid[r][c] = 'A';
                return true;
            }
            case 'B': { //if 'Z', no change
                grid[r][c] = 'C';
                return true;
            }
            case 'C': { //if 'Z', no change
                grid[r][c] = 'D';
                return true;
            }
            case 'D': { //if 'Z', no change
                grid[r][c] = 'E';
                return true;
            }
            case 'E': { //if 'Z', no change
                grid[r][c] = 'F';
                return true;
            }
            case 'F': { //if 'Z', no change
                grid[r][c] = 'G';
                return true;
            }
            case 'G': { //if 'Z', no change
                grid[r][c] = 'H';
                return true;
            }
            case 'H': { //if 'Z', no change
                grid[r][c] = 'I';
                return true;
            }
            case 'I': { //if 'Z', no change
                grid[r][c] = 'J';
                return true;
            }
            case 'J': { //if 'Z', no change
                grid[r][c] = 'K';
                return true;
            }
            case 'K': { //if 'Z', no change
                grid[r][c] = 'L';
                return true;
            }
            case 'L': { //if 'Z', no change
                grid[r][c] = 'M';
                return true;
            }
            case 'M': { //if 'Z', no change
                grid[r][c] = 'N';
                return true;
            }
            case 'N': { //if 'Z', no change
                grid[r][c] = 'O';
                return true;
            }
            case 'O': { //if 'Z', no change
                grid[r][c] = 'P';
                return true;
            }
            case 'P': { //if 'Z', no change
                grid[r][c] = 'Q';
                return true;
            }
            case 'Q': { //if 'Z', no change
                grid[r][c] = 'R';
                return true;
            }
            case 'R': { //if 'Z', no change
                grid[r][c] = 'S';
                return true;
            }
            case 'S': { //if 'Z', no change
                grid[r][c] = 'T';
                return true;
            }
            case 'T': { //if 'Z', no change
                grid[r][c] = 'U';
                return true;
            }
            case 'U': { //if 'Z', no change
                grid[r][c] = 'V';
                return true;
            }
            case 'V': { //if 'Z', no change
                grid[r][c] = 'W';
                return true;
            }
            case 'W': { //if 'Z', no change
                grid[r][c] = 'X';
                return true;
            }
            case 'X': { //if 'Z', no change
                grid[r][c] = 'Y';
                return true;
            }
            case 'Y': { //if 'Z', no change
                grid[r][c] = 'Z';
                return true;
            }
            default:
                return true;
        }
    }
    
} //record definition

void History::display() const {
    clearScreen();
    // Position (row,col) in the arena coordinate system is represented in
    // the array element grid[row-1][col-1]
    int r, c;
    
    // Fill the grid with dots
    for (r = 0; r < MAXROWS; r++) {
        for (c = 0; c < MAXCOLS; c++) {
            cout << grid[r][c];
        }
        cout << "\n";
    }
    // Draw the grid
    clearScreen();

}