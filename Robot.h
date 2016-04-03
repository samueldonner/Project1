//
//  Robot.h
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#ifndef Robot_h
#define Robot_h

class Arena;  // This is needed to let the compiler know that Arena is a
// type name, since it's mentioned in the Robot declaration.

class Robot
{
public:
    // Constructor
    Robot(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool getAttacked(int dir);
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};

#endif /* Robot_h */
