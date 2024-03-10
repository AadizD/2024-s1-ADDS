#include "Referee.h"
#include "Move.h"

// Constructor for Referee class
Referee::Referee(){};

// Return: a pointer to the winning Player object, or nullptr if there is no winner
Player *Referee::refGame(Player *player1, Player *player2)
{
   // Each player makes a move
   Move *player1_move = player1->makeMove();
   Move *player2_move = player2->makeMove();

   // If the moves have the same name, it is a tie
   if (player1_move->getName() == player2_move->getName())
   {
       return nullptr; 
   }
   // If player2's move is beaten by player1's move, player1 wins
   else if (player2_move->isBeatenBy(player1_move->getName()))
   {
       return player1;
   }

   // Otherwise, player2 wins
   return player2;
}