#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};
int main(){
    Solution s;
    vector<int> nums={3,2,3,1,2,4,5,5,6} ;
    int k;
    cout<<"Enter the value of the k:-";
    cin>>k;
    cout<<s.findKthLargest(nums,k);
    return 0;
}