#include "Truckloads.h"

using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates < 0 || loadSize < 0)
        return -1;

    if (numCrates == 0 || loadSize == 0)
        return 0;

    // Base case 
    if (loadSize >= numCrates)
    {
        return 1;
    }
        
    return (numTrucks(numCrates/2 + numCrates % 2, loadSize) + numTrucks(numCrates/2, loadSize));
}