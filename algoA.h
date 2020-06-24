//header file algoA.h
//@author Vanessa Hadlock
//@date June 22nd, 2020
//@brief Project 4

#ifndef ALGOA.H
#define ALGOA.H


struct cell {int parent i, int parent j};

bool isValid(int row, int col);

bool isUnBlocked(int grid[][COL], int row, int col);

bool isDestination(int row, int col, Pair dest);



#endif
