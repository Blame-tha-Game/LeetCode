#include <vector>
using namespace std;

vector<int> nestedfunction (vector<int>& nums, int target){
    vector<int> answer;
    for (int i = 0; i < nums.size()-1; i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
            
        }
        
    }
    answer.push_back(9);
    answer.push_back(0);
    return answer;
}