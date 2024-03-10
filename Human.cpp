// Human.cpp
#include "Human.h"
#include <iostream>

Human::Human(std::string playerName) : name(playerName) {}

Move* Human::makeMove() const {
    std::string move;
    std::cout << "Enter move: ";
    std::cin >> move;

    if (move == "Monkey") return new Monkey();
    else if (move == "Robot") return new Robot();
    else if (move == "Pirate") return new Pirate();
    else if (move == "Ninja") return new Ninja();
    else if (move == "Zombie") return new Zombie();
    else return nullptr; // Invalid move
}

std::string Human::getName() const {
    return name;
}
