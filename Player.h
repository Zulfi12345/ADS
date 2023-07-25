#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player{
    protected:
        string _name;
        char _move;
    public:
        Player();
        Player(string name);
        virtual char makeMove();
        virtual string getName();

};


#endif