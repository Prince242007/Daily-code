#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mini(n);
        mini[n-1] = nums[n-1]; 
        for(int i=n-2;i>=0;i--){
            mini[i] = min(mini[i+1],nums[i]);
        }
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            maxi = max(nums[i],maxi);
            if((maxi-mini[i])<=k) return i;
        }

        return -1;
    }
};
int main(){
    Solution s;
    vector<int> nums={5,0,1,4} ;
    int k;
    cout<<"Enter the  K:- ";
    cin>>k;
    cout<<s.firstStableIndex(nums,k);
    return 0;
}