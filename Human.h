// Human.h
#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
private:
    std::string name;
public:
    Human(std::string playerName = "Human");
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif // HUMAN_H
