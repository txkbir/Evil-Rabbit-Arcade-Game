//
//  History.cpp
//  cs32project1
//
//  Created by Takbir Rahman on 4/5/23.
//

#include "History.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols)
  : m_rows(nRows), m_cols(nCols) {}

bool History::record(int r, int c) {
    if (r <= 0  ||  c <= 0  ||  r > m_rows  ||  c > m_cols)
        return false;
    else
        m_array[r - 1][c - 1]++;        // subtracting 1 because Smallberg's
                                        // definition of the leftmost corner is
    return true;                        // [1][1], whereas C++ defines it at [0][0]
}

void History::display() const {
    clearScreen();
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            if (m_array[i][j] == 0)
                cout << ".";
            else if (m_array[i][j] < 26 && m_array[i][j] > 0) {
                char letter = 'A' + m_array[i][j] - 1;      // subtract 1 because this condition
                cout << letter;                             // occurs if the value != 0, otherwise
                }                                           // an extra move will be displayed
            else if (m_array[i][j] >= 26)
                cout << "Z";
        }
        cout << endl;
    }
    cout << endl;
}
