#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>

#define RED_COLOR 100
#define YELLOW_COLOR 110
#define lowerbound 380

//DEFAULTS.C
void programInitialize();
void showHeaderFooter();

//SUPPORTS.C
void move();
void changeTurn();

//CHECKWIN.C
void checkWin();
void checkVertical();
void checkHorizontal();
void checkForwardDiagonal();
void checkBackwardDiagonal();

//CHECKTIE.C
int checkTie();

//4NAROW2P.C
extern char wholeGrid[45];
extern int turn, turn_counter, arrowCounter, winCounter;
extern int oneColumn, twoColumn, threeColumn, fourColumn;
extern int fiveColumn, sixColumn, sevenColumn;
extern int GraphDriver, GraphMode;
