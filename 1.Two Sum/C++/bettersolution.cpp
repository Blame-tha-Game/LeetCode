#include <iostream>
#include <vector>
#include "bettersolution.hpp"
using namespace std;

//Acronyms: Commented out Code (CoC)

vector<int> betterfunction (vector<int>& nums, int target){
    vector<int> answer;
    vector<betterstruct> bitfield;
    bitfield.push_back(betterstruct(-1, -1));

    //For loop that makes a vector that acts as a look up table. Where the new vector's length is 
    //    equal to the highest number in the passed in the passed in vector. N number found in the passed in vector
    //    can be looked up in the new vector and the index of that N number from the passed in vector
    //    can be found there.
    for (int i = 0; i < nums.size(); i++)
    {
        if (bitfield.size() <= nums[i])
        {
            while (bitfield.size() <= nums[i])
            {
                bitfield.push_back(betterstruct(-1, -1));
            }
        }
        if (bitfield[nums[i]].primary != -1)
        {
            bitfield[nums[i]].secondary = i;
        }
        else
        {
            bitfield[nums[i]].primary = i;
        }
        //CoC left to show how to use the insert function
        //bitfield.insert(bitfield.begin() + nums[i], temp); //(temp equals type betterstruct)
    }

    //CoC left to show an easy function to call to print the vector
    //printStructVector(bitfield);

    for (int i = 0; i < nums.size()-1; i++)
    {
        if (bitfield[target - nums[i]].primary != -1)
        {
            //Handles if the solution is two of the same number
            if (bitfield[target - nums[i]].primary == i)
            {
                if (bitfield[target - nums[i]].secondary == -1)
                {
                    continue;
                } else {
                    answer.push_back(i);
                    answer.push_back(bitfield[target - nums[i]].secondary);
                    return answer;
                }
            }
            answer.push_back(i);
            answer.push_back(bitfield[target - nums[i]].primary);
            return answer;
        }
        
    }
    
    //Error code as this implementation can not be used with negitive numbers
    answer.push_back(-1);
    answer.push_back(-1);
    return answer;
}

void printStructVector (vector<betterstruct> printvector){
    for (const auto& betterstruct : printvector)
    {
        cout << '(' << betterstruct.primary << ", " << betterstruct.secondary << ") " << endl;
    }
}