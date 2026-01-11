#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {

        int n = nums.size();
        if (n <= 2)
            return -1;

        sort(nums.begin(), nums.end());

        if (nums[0] == nums[n - 1])
            return -1;

        return nums[1];
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 1, 4};
    cout << s.findNonMinOrMax(nums);
    return 0;
}