#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans1;
        bool flag = false;
        for (int i = 0; i < nums1.size(); i++)
        {
            flag = false;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = true;
                }
                if (flag == true && nums2[j] > nums1[i])
                {
                    ans1.push_back(nums2[j]);
                    break;
                }
                else if(j==nums2.size()-1){
                    flag= false;
                }
            }
            if (flag == false)
            {
                ans1.push_back(-1);
            }
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> nums1 = {4,1,2}, nums2 = {1,3,4,2};
    vector<int> ans = s.nextGreaterElement(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}