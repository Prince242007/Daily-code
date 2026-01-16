#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minOperations(vector<int>& nums) {
        int count =0;
        for (int i = 1; i < nums.size(); i++)
        {
            while(nums[i]<=nums[i-1])
            {
                nums[i]+=1;
                count++;
            }
        }
        return count ;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,5,2,4,1};
    cout<<s.minOperations(nums);
    return 0;
}