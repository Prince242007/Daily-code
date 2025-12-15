#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int val = 0;

        for (int bit : nums) {
            val = (val * 2 + bit) % 5;
            ans.push_back(val == 0);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,0,1};
    vector<bool> ans1=s.prefixesDivBy5(nums);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}