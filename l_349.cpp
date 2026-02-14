#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans1;
        int i = 0, j = 0, k = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                if (ans1.empty() || nums1[i] != ans1.back())
                {
                    ans1.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 2, 1}, nums2 = {2, 2};
    vector<int> ans = s.intersection(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}