#include "Monkey.h"

std::string Monkey::getName() const {
    return "Monkey";
}

bool Monkey::beats(const Move& other) const {
    return other.getName() == "Paper" || other.getName() == "Scissors";
}