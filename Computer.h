#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

using namespace std;

class Computer : public Player{
protected:
    string _name;
    char _move;
public:
    Computer();
};

#endif