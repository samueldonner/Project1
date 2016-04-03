//
//  Game.h
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#ifndef Game_h
#define Game_h


class Arena;  // This is needed to let the compiler know that Arena is a
// type name, since it's mentioned in the Robot declaration.

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};

#endif /* Game_h */
