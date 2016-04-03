//
//  History.h
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#ifndef History_h
#define History_h

#include "globals.h"
class Arena;

class History
{
public:
    History(int nRows, int nCols); // dont have to check if nRow/nCols is <1 or > MAXRows/MAXCols
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    int historyGrid[MAXROWS][MAXCOLS]; // create a grid to store info about robot death
    Arena* m_arena;
    
};

#endif /* History_h */
