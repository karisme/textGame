#include <iostream>
#include <unistd.h>

int bleed;
int direction;
int slow = 300000;

void pathRunOne();
void pathHideOne();

void pathHideTwo();
void pathFightTwo();

void pathJumpThree();
void pathTalkThree();

void stairsUp();
void stairsDown();

void street();


void end();

void typewrite(std::string s);
void typewrite(std::string s, int y);