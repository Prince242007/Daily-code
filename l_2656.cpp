#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0,n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=k;i++)
        {
            sum+=nums[n];
            nums[n]+=1;
        }
        return sum;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    int k ;
    cout<<"Enter the number :- ";
    cin>>k;
    cout<<s.maximizeSum(nums,k);
    return 0;
}