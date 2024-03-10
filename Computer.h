// Computer.h
#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif // COMPUTER_H
