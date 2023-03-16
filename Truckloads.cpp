using namespace std;

class Truckloads()
{
    public:
    int numTrucks(int numCrates, int loadSize)
    {
        // Base case 
        if (loadsize >= numCrates)
        {
            return 1;
        }
        return (numTrucks(numCrates/2 + numCrates % 2, loadSize) + numTrucks(numCrates/2, loadSize));
    }
}