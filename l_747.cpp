#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int dominantIndex(vector<int>& nums) {
        int maxy = INT_MIN , idx;
        for (int i = 0; i < nums.size(); i++)
        {
            maxy = max(maxy,nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==maxy)
            {
                idx = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]*2>maxy && idx!=i)
            {
                return -1;
            }
        }
        return idx;
    }       
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    cout<<s.dominantIndex(nums);
    return 0;
}