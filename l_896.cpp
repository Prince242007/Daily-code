#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        if (temp == nums)
        {
            return 1;
        }
        reverse(nums.begin(), nums.end());
        return (temp == nums);
    }
};
int main()
{
    Solution s;
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {6, 5, 4, 4};
    vector<int> nums3 = {1, 3, 2};
    cout << s.isMonotonic(nums1) << endl;
    cout << s.isMonotonic(nums2) << endl;
    cout << s.isMonotonic(nums3) << endl;
    return 0;
}