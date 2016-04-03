//
//  globals.h
//  Project1
//
//  Created by Samuel Donner on 4/2/16.
//  Copyright © 2016 Samuel Donner. All rights reserved.
//

#ifndef globals_h
#define globals_h

const int MAXROWS = 20;             // max number of rows in the arena
const int MAXCOLS = 30;             // max number of columns in the arena
const int MAXROBOTS = 100;          // max number of robots allowed
const int INITIAL_ROBOT_HEALTH = 2;

const int UP    = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int RIGHT = 3;


int decodeDirection(char dir);
int randInt(int min, int max);
void clearScreen();

#endif /* globals_h */
