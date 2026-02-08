#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;

    void solve(vector<int> &nums, vector<int> &temp, vector<bool> &used)
    {
        if (temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i])
                continue;

            used[i] = true;
            temp.push_back(nums[i]);

            solve(nums, temp, used);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        solve(nums, temp, used);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans1 = s.permute(nums);
    for (int i = 0; i < ans1.size(); i++)
    {
        for (int j = 0; j < ans1[i].size(); j++)
        {

            cout << ans1[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}