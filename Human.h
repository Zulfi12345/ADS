#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

class Human : public Player{
    protected:
        string _name;
        char _move;
    public:
        Human(string name);
        Human();
};

#endif