#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <string>

int main() {
    // Create a new Human player instance with the name "Mie"
    Player* player1 = new Human("Mie");

    // Create a new Computer player instance
    Player* player2 = new Computer();

    // Create a Referee instance
    Referee ref=Referee();

    // Call the refGame function of Referee instance to determine the winner
    Player* winner=ref.refGame(player1, player2);

    // Print the name of the winner
    std::cout<< winner->getName()<< std::endl;

    // Terminate the program
    return 0;
};