#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> ops;
        int current = 1;
        for (int num : target)
        {
            while (current < num)
            {
                ops.push_back("Push");
                ops.push_back("Pop");
                current++;
            }
            ops.push_back("Push");
            current++;
        }
        return ops;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3};
    int k = 3;
    vector<string> ans1 = s.buildArray(nums, k);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
    return 0;
}