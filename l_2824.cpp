#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if((nums[i]+nums[j])<target)
                {
                    count++;
                }
            }
            
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int> nums={-1,1,2,3,1};
    int target ;
    cout<<"Enter the target value :- ";
    cin>>target;
    cout<<s.countPairs(nums,target);
    return 0;
}