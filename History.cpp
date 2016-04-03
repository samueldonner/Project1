//
//  History.cpp
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#include "History.h"
#include "globals.h"
#include "Arena.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    
    for( int i = 0; i < m_rows; i++ )
    {
        for( int j = 0; j < m_cols; j++ )
        {
            historyGrid[i][j] = 0; // fill in historyGrid with intial starting values of 0
        }
    }
    
}

bool History::record(int r, int c)
{
    if( r < 1 || r > MAXROWS ||
        c < 1 || c > MAXCOLS )
    {
        return false; // ensure that the row and column is valid
    }
    
    historyGrid[r-1][c-1]++; // increase the history grid value if a robot dies there
    
    return true;
}

void History::display() const
{
    clearScreen();
    for( int i = 0; i < m_rows; i++ )
    {
        for( int j = 0; j < m_cols; j++ )
        {
            if(historyGrid[i][j] == 0)
            {
                cout << "."; // if gridspace contains intial value print a .
            }
            else
            {
                int letters = 0;
                if( historyGrid[i][j] < 26)
                    letters = 64 + historyGrid[i][j]; // else add a value > 0 to get ascII integers
                else
                    letters = 90;
                cout << (char) letters; // cast integer to char
            }
        }
        cout << endl;
    }
}