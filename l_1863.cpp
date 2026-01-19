#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;

        // Loop over all subsets
        for (int mask = 0; mask < (1 << n); mask++)
        {
            int xorsum = 0;

            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    xorsum = xorsum ^ nums[i];
                }
            }

            ans += xorsum;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 1, 6};
    cout << s.subsetXORSum(nums);
    return 0;
}
