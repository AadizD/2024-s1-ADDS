#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <unordered_map>

class EfficientTruckLoads {
private:
    std::unordered_map<int, int> memo;
    
public:
    int numTrucks(int numCrates, int loadSize);
};

#endif // EFFICIENTTRUCKLOADS_H
