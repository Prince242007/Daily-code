#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        vector<bool> has(101,false);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
            has[nums[i]] = true;
       }
        
        for(int i=mini+1;i<maxi;i++)
           if(!has[i]) 
                ans.push_back(i);  
        
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>nums={1,4,2,5};
    vector<int>ans1=s.findMissingElements(nums);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    
    return 0;
}