#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int i = 0;
        sort(nums.begin(), nums.end());

        if(nums[0] != 0)
            return 0;

        for (; i < nums.size() - 1; i++)
        {
            if(nums[i+1] - nums[i] == 1)
                continue;
            else
                return nums[i] + 1;
        }
        return nums.back() + 1;
    }
};
int main()
{
    Solution s;
    vector<int> num={9,6,4,2,3,5,7,0,1};
    cout<<s.missingNumber(num);
    return 0;
}