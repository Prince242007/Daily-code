#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int getMinDistance(vector<int>& nums, int target, int start) {
        int miny =INT_MAX;
        int distance=0;
        for(int i=0 ;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                distance = abs(i-start);
                miny=min(distance,miny);
            }
        }
        return miny;
    }
};
int main(){
    Solution s;
    vector<int> nums={5,3,6};
    int target , start ;
    cout<<"Enter the target and start :- ";
    cin>>target>> start;
    cout<<s.getMinDistance(nums,target,start);
    return 0;
}