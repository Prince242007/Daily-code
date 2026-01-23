#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findFinalValue(vector<int>& nums, int original) {
        int ans;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==original)
            {
                original*=2;
                i=-1;
            }
        }
        return original ;
    }
};
int main(){
    Solution s;
    vector<int> num={5,3,6,1,12};
    int original;
    cout<<"enter the value of te original :- ";
    cin>>original;
    cout<<s.findFinalValue(num,original);
    return 0;
}