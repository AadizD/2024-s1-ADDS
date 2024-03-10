#include <iostream>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"

void printWinner(const Move& move1, const Move& move2) {
    if (move1.beats(move2)) {
        std::cout << move1.getName() << " beats " << move2.getName() << "! " << move1.getName() << " wins." << std::endl;
    } else if (move2.beats(move1)) {
        std::cout << move2.getName() << " beats " << move1.getName() << "! " << move2.getName() << " wins." << std::endl;
    } else {
        std::cout << "It's a tie! Both " << move1.getName() << " and " << move2.getName() << " lose." << std::endl;
    }
}

int main() {
    Rock rock;
    Paper paper;
    Scissors scissors;
    Robot robot;
    Monkey monkey;

    printWinner(rock, paper);
    printWinner(rock, scissors);
    printWinner(rock, robot);
    printWinner(rock, monkey);

    printWinner(paper, rock);
    printWinner(paper, scissors);
    printWinner(paper, robot);
    printWinner(paper, monkey);

    printWinner(scissors, rock);
    printWinner(scissors, paper);
    printWinner(scissors, robot);
    printWinner(scissors, monkey);

    printWinner(robot, rock);
    printWinner(robot, paper);
    printWinner(robot, scissors);
    printWinner(robot, monkey);

    printWinner(monkey, rock);
    printWinner(monkey, paper);
    printWinner(monkey, scissors);
    printWinner(monkey, robot);

    return 0;
}