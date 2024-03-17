// TruckLoads.cpp

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 0 || loadSize <= 0) {
        return -1; // Invalid input
    } else {
        int trucksNeeded = numCrates / loadSize;
        if (numCrates % loadSize != 0) {
            trucksNeeded++; // Additional truck needed for remaining crates
        }
        return trucksNeeded;
    }
}
