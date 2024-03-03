#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);

private:
    char getWinner(char move1, char move2);
};

#endif 
