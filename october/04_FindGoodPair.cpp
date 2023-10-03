#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main(){
    Solution  obj;
    vector<int> nums{1,2,3,2,1,2,1};
    cout<<obj.numIdenticalPairs(nums);
}