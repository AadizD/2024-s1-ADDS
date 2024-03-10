#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <string>

int main() {
    Player* Player1 = new Human("Aadi");

    // Create a new Computer player
    Player* Player2 = new Computer();

    // Create a Referee object
    Referee ref = Referee();

    // Here, The refGame function from Referee class will determine the winner between Player1 and Player2
    Player* winner = ref.refGame(Player1, Player2);

    // Print the name of the winner
    std::cout << winner->getName() << std::endl;

    // And the allocated memory would get cleaned up here
    delete Player1;
    delete Player2;

    return 0;
};