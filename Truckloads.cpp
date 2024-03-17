#include "TruckLoads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: all crates fit in one truckload
    } else {
        int remainingCrates = numCrates - loadSize;
        int trucksNeeded = numTrucks(remainingCrates, loadSize);
        return trucksNeeded + 1; // Add one truck for the current load
    } //
};
