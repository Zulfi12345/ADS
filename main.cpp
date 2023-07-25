#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string>

using namespace std;

int main(void){
    Human* player1 = new Human();
    //player1->makeMove();
    Computer* player2 = new Computer();
    Referee r1 = Referee();
    Player* winner = r1.refGame(player1, player2);

    if (winner != nullptr){
    cout << winner->getName() << " Wins." << endl;
    } else {
        cout << "It's a Tie" << endl;
    }

    return 0;
}
