#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
#include <string>

int main() {
    // Create a new Human player with the name "Mie"
    Player* P1 = new Human("Mie");

    // Create a new Computer player
    Player* P2 = new Computer();

    // Create a Referee object
    Referee ref = Referee();

    // The function will determine the winner of the game between p1 and p2
    Player* winner = ref.refGame(P1, P2);

    // Output the name of the winner to the console
    std::cout << winner->getName() << std::endl;

    // Here we will, Clean up the dynamically allocated memory
    delete P1;
    delete P2;

    return 0;
}