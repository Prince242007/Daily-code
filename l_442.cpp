#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // vector<int> findDuplicates(vector<int>& nums) {
    //     vector<int> ans1;
    //     int freq=0;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         freq=0;
    //         for (int j = 0; j < nums.size(); j++)
    //         {
    //             if(nums[i]==nums[j] )
    //             {
    //                 freq++;
    //             }
    //         }
    //         if(freq>1 && find(ans1.begin(), ans1.end(), nums[i]) == ans1.end())
    //         {
    //             ans1.push_back(nums[i]);

    //         }

    //     }
    //     return ans1;

    // }
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        vector<int> ans;

        for (int x : nums)
        {
            freq[x]++;
        }

        for (auto it : freq)
        {
            if (it.second > 1)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = s.findDuplicates(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}