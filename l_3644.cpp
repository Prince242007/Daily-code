#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                ans &= nums[i];
            }
        }

        return ans == -1 ? 0 : ans;
    }
};

int main(){
    Solution s;
    vector<int> nums ={0,3,2,1};
    cout<<s.sortPermutation(nums);
    
    return 0;
}