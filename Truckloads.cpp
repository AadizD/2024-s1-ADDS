#include <iostream>

class Truckloads {
public:
  int numTrucks(int numCrates, int loadSize) {
    // Base cases:
    if (numCrates <= loadSize) {
      return 1; // One truck can handle all crates
    } else if (numCrates % 2 == 0) {
      return numTrucks(numCrates / 2, loadSize); // Divide crates in half if even number
    } else {
      return 1 + numTrucks(numCrates / 2 + 1, loadSize); // +1 for remaining crate on odd division
    }
  }
};

int main() {
  int numCrates, loadSize;

  std::cout << "Enter number of crates: ";
  std::cin >> numCrates;

  std::cout << "Enter maximum crates per truck: ";
  std::cin >> loadSize;

  Truckloads truckloads;
  int trucksNeeded = truckloads.numTrucks(numCrates, loadSize);

  std::cout << "Number of trucks needed: " << trucksNeeded << std::endl;

  return 0;
}