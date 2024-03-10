#include "Computer.h"
#include "Move.h"

// The makeMove function returns a new Move object
// The move is always "Rock" and its counter move is "Paper"
Move* Computer::makeMove() {
    return new Move("Rock", {"Paper"});
}

// The getName function returns the name of the Computer player
std::string Computer::getName() {
    return "Computer";
}