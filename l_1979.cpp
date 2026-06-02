#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int maxy =1;
        for (int i = 1; i <= nums[0]; i++)
        {
            if (nums[0] % i == 0 && nums[n] %i == 0)
            {
                maxy = max(maxy, i);
            }
        }
        return maxy;

        
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3,3,3,33};
    cout << s.findGCD(nums);
    return 0;
}