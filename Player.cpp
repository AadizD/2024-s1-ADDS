// Player.cpp
#include "Player.h"
#include<iostream>
using namespace std;
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

// Implementation of Computer class
Move* Computer::makeMove() const {
    // Computer randomly chooses a move
    int choice = rand() % 5;
    switch (choice) {
        case 0: return new Monkey();
        case 1: return new Robot();
        case 2: return new Pirate();
        case 3: return new Ninja();
        case 4: return new Zombie();
        default: return nullptr; // Should not happen
    }
}

std::string Computer::getName() const {
    return "Computer";
}
