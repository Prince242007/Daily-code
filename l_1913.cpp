#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size()-1;
        return ((nums[n]*nums[n-1])-(nums[0]*nums[1]));
    }
};
int main(){
    Solution s;
    vector<int> nums={4,2,5,9,7,4,8};
    cout<<s.maxProductDifference(nums);
    return 0;
}