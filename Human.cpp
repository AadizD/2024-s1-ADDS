#include "Human.h"
#include "Move.h"

#include <vector>

// Constructor for the Human class, sets the default name to "Human"
Human::Human() {
   this->name = "Human";
   // Sets the name of the human player
}

// Overloaded constructor for the Human class, sets the name based on the given string
Human::Human(std::string name){
   this->name = name;
}

// Function for the Human class to make a move
// Asks the user to input a move, then returns a Move object based on the input
Move* Human::makeMove() {
   std::string move;

   std::cout << "Enter Move: ";
   std::cin >> move;

   // Rock defeats scissors
   if (move == "Rock")
       return new Move("Rock", {"Paper"});
   // Paper defeats rock
   else if (move == "Paper")
       return new Move("Paper", {"Scissors"});
   // Scissors defeats paper
   else if (move == "Scissors")
       return new Move("Scissors", {"Rock"});
   // Ninja defeats monkey and robot
   else if (move == "Ninja")
       return new Move("Ninja", {"Monkey", "Robot"});
   // Monkey defeats zombie and pirate
   else if (move == "Monkey")
       return new Move("Monkey", {"Zombie", "Pirate"});
   // Robot defeats pirate and monkey
   else if (move == "Robot")
       return new Move("Robot", {"Pirate", "Monkey"});
   // Pirate defeats zombie and ninja
   else if (move == "Pirate")
       return new Move("Pirate", {"Zombie", "Ninja"});
   // Zombie defeats robot and ninja
   else if (move == "Zombie")
       return new Move("Zombie", {"Robot", "Ninja"});
   
   // Returns nullptr if the input move is not recognized
   return nullptr;
}

// Function to get the name of the human player
std::string Human::getName() {
   return this->name;
}