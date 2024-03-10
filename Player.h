// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual Move* makeMove() const = 0;
    virtual std::string getName() const = 0;
};

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string playerName = "Human");
    Move* makeMove() const override;
    std::string getName() const override;
};

class Computer : public Player {
public:
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif // PLAYER_H
