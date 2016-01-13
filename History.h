//
//  History.h
//  project_1
//
//  Created by Nolan on 1/12/16.
//  Copyright (c) 2016 CS32. All rights reserved.
//

#ifndef __project_1__History__
#define __project_1__History__
#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_nRows, m_nCols;
    char grid[MAXROWS][MAXCOLS]; //history grid
};

#endif /* defined(__project_1__History__) */

