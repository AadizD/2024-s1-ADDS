#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: all crates fit in one truckload
    } else {
        // Calculate the number of full truckloads
        int fullTrucks = numCrates / loadSize;

        // Calculate the number of remaining crates after filling full truckloads
        int remainingCrates = numCrates % loadSize;

        // If there are remaining crates, add one more truck
        if (remainingCrates > 0) {
            return fullTrucks - 1;
        } else {
            return fullTrucks;
        }
    }
}