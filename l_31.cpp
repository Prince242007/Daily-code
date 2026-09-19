#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1,n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot =i;
                break;

            }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        for(int i=n-1;i>pivot;i--)
        {
            if(nums[i]>nums[pivot])
            {
                swap(nums[i],nums[pivot]);
                break;
            }

        }
        int i=pivot+1,j=n-1;
    while(i<=j)
    {
        swap(nums[i++],nums[j--]);
    }
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3};
    s.nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" "; 
    }
    
    return 0;
}