#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < n; i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,2};
    vector<int> ans= s.getConcatenation(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}