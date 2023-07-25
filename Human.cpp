#include "Player.h"
#include "Human.h"
#include <string>

using namespace std;

Human::Human(string name): Player(name){}

Human::Human() : Player("Human"){}