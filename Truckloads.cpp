#include "Truckloads.h"

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
    
    if (numCrates % 2 != 0)
    {
        if (numCrates <= loadSize)
        {
            return 1;
        }
        return numTrucks(numCrates/2+1,loadSize)+numTrucks(numCrates/2,loadSize);
    } else {
        if (numCrates <= loadSize)
        {
            return 1;
        }
        return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
    }
}