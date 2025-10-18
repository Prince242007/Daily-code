#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if(target <= nums[i]) {
                return i;
            }
        }
        return nums.size();  // target is greater than all elements
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,5,6} ;
    int t= 5;
    cout << s.searchInsert(nums,t);
    return 0;
}