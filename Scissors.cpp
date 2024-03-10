#include "Scissors.h"

std::string Scissors::getName() const {
    return "Scissors";
}

bool Scissors::beats(const Move& other) const {
    return other.getName() == "Paper";
}