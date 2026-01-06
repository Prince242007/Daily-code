#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 5, 4, 5};
    cout << s.maxProduct(nums);
    return 0;
}