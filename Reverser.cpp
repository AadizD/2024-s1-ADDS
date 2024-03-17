#include "Reverser.h"
#include <cmath>
using namespace std;

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }
    if (value < 10) {
        return value;
    }
    return reverseDigit(value / 10) + (value % 10) * pow(10, floor(log10(abs(value))));
}

string Reverser::reverseString(string characters) {
    if (characters.length() == 0) {
        return "ERROR";
    }
    if (characters.length() == 1) {
        return characters;
    }

    return characters.back() + reverseString(characters.substr(0, characters.length() - 1));
}