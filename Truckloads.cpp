#include "Truckloads.h"

#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }

    return numTrucks(std::floor(numCrates / 2.0f), loadSize) + numTrucks(std::ceil(numCrates / 2.0f), loadSize);
}