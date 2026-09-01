#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int mini = nums[0];
        int maxi = nums[0];
        int minidx = 0;
        int maxidx = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                maxidx = i;
            }
            else if (nums[i] < mini)
            {
                mini = nums[i];
                minidx = i;
            }
        }
        int left = min(minidx, maxidx);
        int right = max(minidx, maxidx);
        int ans1 = right + 1;
        int ans2 = n - left;
        int ans3 = left + 1 + n - right;

        return min({ans1, ans2, ans3});
    }
};
int main()
{
    Solution s;
    vector<int> num={2,10,7,5,4,1,8,6};
    cout<<s.minimumDeletions(num);

    return 0;
}