#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0,maxy=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==0)
            {
                ans=max(maxy,ans);
                maxy=0;
            }
            else if(nums[i]==1)
            {
                maxy++;
                ans=max(maxy,ans);
            }
        }
        return ans;

    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,0,1,1,1};
    cout<<s.findMaxConsecutiveOnes(nums);
    return 0;
}