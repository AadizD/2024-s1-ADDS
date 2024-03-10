#include "Robot.h"

std::string Robot::getName() const {
    return "Robot";
}

bool Robot::beats(const Move& other) const {
    return other.getName() == "Paper" || other.getName() == "Zombie";
}