#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        return max(0, (mx - mn) - 2 * k);
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,6} ;
    int k;
    cout<<s.smallestRangeI(nums,k);

    return 0;
}