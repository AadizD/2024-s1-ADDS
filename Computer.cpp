// Computer.cpp
#include "Computer.h"
#include <cstdlib> // for rand

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
