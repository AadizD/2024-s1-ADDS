#include "EfficientTruckLoads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1; // Base case: all crates fit in one truckload
    }
    
    if (memo.find(numCrates) != memo.end()) {
        return memo[numCrates]; // Return memoized value if available
    }
    
    int remainingCrates = numCrates - loadSize;
    int trucksNeeded = numTrucks(remainingCrates, loadSize);
    int result = trucksNeeded + 1; // Add one truck for the current load
    
    memo[numCrates] = result; // Store calculated value in memo
    
    return result;
}
