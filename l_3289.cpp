#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int freq = count(nums.begin(), nums.end(), nums[i]);

            if (find(ans.begin(), ans.end(), nums[i]) == ans.end()  && freq==2)
            {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {7, 1, 5, 4, 3, 4, 6, 0, 9, 5, 8, 2};
    vector<int> ans = s.getSneakyNumbers(nums);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "  ";

    return 0;
}
