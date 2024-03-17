#include <iostream>

class Truckloads {
public:
    int numTrucks(int numCrates, int loadSize) {
        if (numCrates <= loadSize) {
            return 1;
        } else {
            int half = numCrates / 2;
            return numTrucks(half, loadSize) + numTrucks(numCrates - half, loadSize);
        }
    }
};

int main() {
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(14, 3) << std::endl; // Output: 6
    std::cout << truckloads.numTrucks(15, 1) << std::endl; // Output: 15
    std::cout << truckloads.numTrucks(1024, 5) << std::endl; // Output: 256
    return 0;
}
