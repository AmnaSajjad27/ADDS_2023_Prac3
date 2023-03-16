#include "Truckloads.h"

using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    // if number of crates is less than 0 or the max size that can fit in a truck is less than 0, return -1
    if (numCrates < 0 || loadSize < 0)
        return -1;
    // if number of creates is 0, then we need 0 trucks
    if (numCrates == 0 || loadSize == 0)
        return 0;

    // Base case 
    if (loadSize >= numCrates)
    {
        return 1;
    }
    // refer to the oneNote diagram 
    return (numTrucks(numCrates/2 + numCrates % 2, loadSize) + numTrucks(numCrates/2, loadSize));
}