#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main() {
    int i, numCrates, loadSize;
    std::string s;

    // Input values
    std::cout << "Enter an integer, a string, number of crates, and load size: ";
    std::cin >> i >> s >> numCrates >> loadSize;

    // Create instances of classes
    Reverser reverse;
    Truckloads truckLoads;
    EfficientTruckloads efficientTruckLoads;

    // Perform operations
    int reverseI = reverse.reverseDigit(i);
    std::string reverseS = reverse.reverseString(s);
    int numTrucks = truckLoads.numTrucks(numCrates, loadSize);
    int efficientNumTrucks = efficientTruckLoads.numTrucks(numCrates, loadSize);

    // Output results
    std::cout << "Reversed integer: " << reverseI << std::endl;
    std::cout << "Reversed string: " << reverseS << std::endl;
    std::cout << "Number of trucks (TruckLoads): " << numTrucks << std::endl;
    std::cout << "Number of trucks (EfficientTruckLoads): " << efficientNumTrucks << std::endl;

    return 0;
}
