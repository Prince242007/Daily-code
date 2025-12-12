#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int>ans1;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        return nums;
        
    }
};
int main(){
    Solution s;
    vector<int> nums={-4,-1,0,3,10};
        
    vector<int>ans = s.sortedSquares(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}