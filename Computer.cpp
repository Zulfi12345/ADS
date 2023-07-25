#include "Player.h"
#include "Computer.h"
#include <iostream>
#include <string>

using namespace std;

Computer::Computer(): Player("Computer"){
    _move = 'R';
}