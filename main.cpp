// main.cpp
#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human("Aadi");
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&human, &computer);

    if (winner == &human)
        std::cout << human.getName() << " Wins" << std::endl;
    else if (winner == &computer)
        std::cout << computer.getName() << " Wins" << std::endl;
    else
        std::cout << "It's a Tie" << std::endl;

    return 0;
}
