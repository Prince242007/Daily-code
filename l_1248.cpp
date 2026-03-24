#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int numberOfSubarrays(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        // Convert to 1 (odd) or 0 (even)
        sum += (nums[i] % 2);

        // Check if (sum - k) exists
        if (mp.find(sum - k) != mp.end()) {
            ans += mp[sum - k];
        }

        mp[sum]++;
    }

    return ans;
}
};
int main(){
    Solution s;
    vector<int> nums={2,4,6};
    int k;
    cout<<"Enter the k :- ";
    cin>>k;
    cout<<s.numberOfSubarrays(nums,k);
    return 0;
}