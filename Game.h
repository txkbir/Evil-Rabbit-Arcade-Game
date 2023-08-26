//
//  Game.h
//  cs32project1
//
//  Created by Takbir Rahman on 4/5/23.
//

#ifndef GAME_H
#define GAME_H

#include <string>

class Arena;

class Game {
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    std::string takePlayerTurn();
};

// Auxiliary function declarations only used in Game.cpp
bool decodeDirection(char ch, int& dir);
bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int  computeDanger(const Arena& a, int r, int c);

#endif
