#include "Reverse.h"
#include <cmath>

int Reverse::reverseDigit(int value) {
    if (value < 0) {
        return -1; // Error indicator for invalid input
    } else if (value < 10) {
        return value; // Base case: single-digit number
    } else {
        int lastDigit = value % 10;
        int remainingDigits = value / 10;
        int reversed = reverseDigit(remainingDigits);
        int numDigits = 0;
        int temp = value;
        
        while (temp > 0) {
            temp /= 10;
            numDigits++;
        }
        
        return (lastDigit * pow(10, numDigits-1)) + reversed;
    }
}

std::string Reverse::reverseString(std::string letters) {
    if (letters.empty()) {
        return "";
    } else if (letters.length() == 1) {
        return letters;
    } else {
        char firstChar = letters[0];
        std::string remainingChars = letters.substr(1);
        std::string reversedRemainingChars = reverseString(remainingChars);
        if (reversedRemainingChars == "ERROR") {
            return "ERROR"; // propagate the error indicator
        }
        return reversedRemainingChars + firstChar;
    }
}
