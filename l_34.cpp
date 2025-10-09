#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        if (nums.empty())
            return {-1, -1};

        int start = -1, end = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                if (start == -1) start = i; 
                end = i;                    
            }
        }

        if (start == -1) return {-1, -1};
        return {start, end};
    }
};
int main()
{
    Solution s;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    // vector<int> nums = {};
    vector<int> ans = s.searchRange(nums, 8);
    cout << "[" << ans[0] << "," << ans[1] << "]";
    return 0;
}