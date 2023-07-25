#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player(string name){
    _name = name;
}

string Player::getName(){
    return _name;
}

char Player::makeMove(){
    cout << "Enter move: ";
    cin >> _move;
    return _move;
}