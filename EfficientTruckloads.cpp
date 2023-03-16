# include "EfficientTruckloads.h"

#include <map>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    // less than 0, return -1 as before
    if (numCrates < 0 || loadSize < 0)
    {
        return -1;
    }

    // if either input is 0, number of trucks needed is alsi 0
    if (numCrates == 0 || loadSize == 0)
    {
        return 0;
    }
    // base case 
    if (numCrates <= loadSize)
    {
        return 1;
    }
    // create two temp index holders 
    int index1 = numCrates/2;
    int index2 = numCrates/2;

    // condition to increment index
    if(numCrates%2 != 0)
        index2++;

    int temp;

    if(memory.count(numCrates))
    {
        temp = memory.find(numCrates)->second;
    }
    else
    {
        // use the map to find already existing calculated sums
        temp = numTrucks(index1, loadsize) + numTrucks(index2, loadsize);
        memory.insert(std::pair<int, int>(numCrates, temp));
    }
    return temp;
}
