//
//  Player.h
//  cs32project1
//
//  Created by Takbir Rahman on 4/5/23.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Arena;

class Player {
  public:
      // Constructor
    Player(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    std::string dropPoisonedCarrot();
    std::string move(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};

#endif
