#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    long long gcdSum(vector<int>& nums) {
        int n= nums.size() , maxy=nums[0];
        long long sum=0;
        vector<int>prefix(n,0);
        for (int i = 0; i < n; i++)
        {
            maxy = max(nums[i],maxy);
            prefix[i]=__gcd(nums[i], maxy);
        }
        // for(int i : prefix){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        sort(prefix.begin(),prefix.end());
        int i=0,j=n-1;
        while (i<j)
        {
            sum += __gcd(prefix[i],prefix[j]);
            i++;
            j--;
        }
        return sum;
    }
};
int main(){
    Solution s;
    vector<int> nums={3,6,2,8};
    long long ans= s.gcdSum(nums);
    cout<<ans;
    return 0;
}