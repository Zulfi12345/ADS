#include "Referee.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2){
    char move = player1->makeMove();
    if(move == 'P'){
        return player1;
    } else if(move == 'S'){
        return player2;
    } else{
        return nullptr;
    }
}