#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <map> 

class EfficentTruckloads
{
    // using a map to store all the calculations so they can be refrenced and dont have to be calculated again
    private:
    std::map<int, int> memory;

    public:
    int numTrucks(int numCrates, int loadSize);
};

#endif
