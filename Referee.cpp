// Referee.cpp
#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();
    char winner = getWinner(move1, move2);
    if (winner == move1)
        return player1;
    else if (winner == move2)
        return player2;
    else
        return nullptr;
}

char Referee::getWinner(char move1, char move2) {
    if (move1 == move2)
        return ' '; // Tie
    else if ((move1 == 'R' && move2 == 'S') ||
             (move1 == 'S' && move2 == 'P') ||
             (move1 == 'P' && move2 == 'R'))
        return move1; // Player 1 wins
    else
        return move2; // Player 2 wins
}
