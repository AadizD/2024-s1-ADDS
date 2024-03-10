#include "Paper.h"

std::string Paper::getName() const {
    return "Paper";
}

bool Paper::beats(const Move& other) const {
    return other.getName() == "Rock";
}