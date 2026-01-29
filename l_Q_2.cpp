#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans1(2 * n);   // FIX: initialize size

        for (int i = 0; i < n; i++)
        {
            ans1[2 * i] = nums[i];
            ans1[2 * i + 1] = nums[i + n];
        }
        return ans1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n;
    cout << "Enter the number :- ";
    cin >> n;

    vector<int> ans = s.shuffle(nums, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
