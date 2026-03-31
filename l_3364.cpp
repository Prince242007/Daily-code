#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        vector<int> temp;
        bool flag = false;
        int sum = 0;
        int miny = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];

                int len = j - i + 1;
                if (sum > 0 && len >= l && len <= r)
                {
                    miny = min(miny, sum);
                    flag = true;
                }
            }
        }
        if (miny == INT_MAX)
            return -1;
        return miny;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, -1, 4};
    int l, r;
    cout << "Enter the L and r value :- ";
    cin >> l >> r;
    cout << s.minimumSumSubarray(nums, l, r);

    return 0;
}