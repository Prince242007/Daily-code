#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        if (nums[0] == nums[1] && nums[1] == nums[2])
        {
            return "equilateral";
        }
        else
        {
            if (nums[0] + nums[1] > nums[2] && nums[0] + nums[1] > nums[2] && nums[0] + nums[1] > nums[2])
            {
                if (nums[0] == nums[1] || nums[1] == nums[2] || nums[1] == nums[0])
                {
                    return "isosceles";
                }
                else
                {
                    return "scalene";
                }
            }
            else
            {
                return "none";
            }
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums1={1,2,3};
    cout<<s.triangleType(nums1);
    vector<int> nums2={3,4,5};
    cout<<s.triangleType(nums2);
    vector<int> nums3={3,3,3};
    cout<<s.triangleType(nums3);

    return 0;
}