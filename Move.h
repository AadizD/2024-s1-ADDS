// Move.h
#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() const = 0;
    virtual bool beats(const Move* opponent) const = 0;
};

class Monkey : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* opponent) const override;
};

class Robot : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* opponent) const override;
};

class Pirate : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* opponent) const override;
};

class Ninja : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* opponent) const override;
};

class Zombie : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* opponent) const override;
};

#endif // MOVE_H
