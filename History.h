//
//  History.h
//  cs32project1
//
//  Created by Takbir Rahman on 4/5/23.
//

#ifndef HISTORY_H
#define HISTORY_H

#include "globals.h"

class History {
  public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
  private:
    int m_rows;
    int m_cols;
    int m_array[MAXROWS][MAXCOLS] = {};
};

#endif
