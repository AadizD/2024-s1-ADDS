#include "Referee.h"
#include "Move.h"

Referee::Referee() {};


// This function is used to referee a game between two players. It takes in two Player pointers as arguments, one for each player.

Player* Referee::refGame (Player*player1, Player* player2) {
   Move* player1_move = player1->makeMove(); // Create a Move object for player1
   Move* player2_move = player2->makeMove(); // Create a Move object for player2

   if (player1_move->getName() == player2_move->getName()) { // Check if the moves have the same name
       return nullptr; // Tie
   } else if (player2_move->isBeatenBy(player1_move->getName())) { // Check if the move of player2 is beaten by the move of player1
       return player1;
   }

   return player2;
}