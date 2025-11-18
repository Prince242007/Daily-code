#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {
        int sum = 0, sum1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 10)
            {
                sum += nums[i];
            }
            else
            {
                sum1 += nums[i];
            }
        }
        if (sum == sum1)
            return false;
        else
            return true;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 10};
    cout << s.canAliceWin(nums);

    return 0;
}