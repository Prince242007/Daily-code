#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> ans1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = 0;
            for (int j = 0; j <=i; j++)
            {
                ans += nums[j];
            }
            ans1.push_back(ans);
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> num = {1,2,3,4};
    vector<int> ans = s.runningSum(num);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}