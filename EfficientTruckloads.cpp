#include "EfficientTruckloads.h"
#include <ctype.h>
#include <map>
#include <iostream>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates < 0 || loadSize < 0) return -1;

    if (numCrates == 0 || loadSize == 0) return 0;

    if (numCrates <= loadSize) {
        return 1;
    }

    int c1 = numCrates/2;
    int c2 = numCrates/2;
    if (numCrates%2 != 0) {
        c2++;
    }

    int temp;
    if (memory.count(numCrates)) {
        temp = memory.find(numCrates)->second;
    } else {
        temp = numTrucks(c1, loadSize) + numTrucks(c2, loadSize);
        memory.insert(std::pair<int, int>(numCrates, temp));
    }
    
    return temp;
}