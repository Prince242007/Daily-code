#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int count =0; 
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(nums[i]-nums[j]==k || nums[j]-nums[i]==k)
                count++;
            }
            
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1,2,2,1};
    int k;
    cout<<"Enter the value of k:-";
    cin>>k;
    cout<<s.countKDifference(nums,k);
    return 0;
}