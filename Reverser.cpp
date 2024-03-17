// Reverser.cpp
#include "Reverser.h"
#include <string>

int Reverser::reverseDigit(int value) {
    if (value < 0) // handling invalid input
        return -1;
    return reverseDigitHelper(value, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0)
        return reversed;
    else
        return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) // handling invalid input
        return "ERROR";
    return reverseStringHelper(characters, 0, characters.length() - 1);
}

std::string Reverser::reverseStringHelper(const std::string& characters, int start, int end) {
    if (start >= end)
        return characters;
    // Swap characters manually
    return reverseStringHelper(characters, start + 1, end - 1);
}
