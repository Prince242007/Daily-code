#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count= 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count=0;
            for (int j = 0; j < nums.size(); j++)
            {
                if(nums[i]>nums[j])
                count++;
            }
            ans.push_back(count);
            
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums={8,1,2,2,3};
    vector<int> ans1 =s.smallerNumbersThanCurrent(nums);
    for (int i = 0; i <ans1.size() ; i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}