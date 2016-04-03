//
//  Player.h
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#ifndef Player_h
#define Player_h

class Arena;  // This is needed to let the compiler know that Arena is a
// type name, since it's mentioned in the Robot declaration.

class Player
{
public:
    // Constructor
    Player(Arena *ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   moveOrAttack(int dir);
    void   setDead();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;
};

#endif /* Player_h */
