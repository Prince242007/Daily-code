#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();

        if (n <= 4)
            return 0;

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        ans = min(ans, nums[n - 4] - nums[0]);
        ans = min(ans, nums[n - 3] - nums[1]);
        ans = min(ans, nums[n - 2] - nums[2]);
        ans = min(ans, nums[n - 1] - nums[3]);

        return ans;
    }
};
int main(){
    Solution s;
    vector<int > nums ={5,3,2,4};
    cout<<s.minDifference(nums);
    return 0;
}