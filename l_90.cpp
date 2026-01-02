#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubset)
    {
        if (i == nums.size())
        {
            allSubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i + 1, allSubset);
        ans.pop_back();
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1])
            idx++;

        getAllSubsets(nums, ans, idx, allSubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubset;
        vector<int> ans;
        getAllSubsets(nums, ans, 0, allSubset);
        return allSubset;
    }
};
int main()
{
    Solution s;
    vector<int> nums={1,2,2};
    vector<vector<int>> ans = s.subsetsWithDup(nums);  // function call
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << "\n";
    }

    return 0;
}