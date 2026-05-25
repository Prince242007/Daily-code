#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int check_digit_sum(int num)
    {
        int s=0;
        while (num>0)
        {
            s += num%10;
            num/=10; 
        }
        return s;
        
    }
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        int digit_sum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
            sum2 += check_digit_sum(nums[i]);
        }
        return sum-sum2;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    cout<<s.differenceOfSum(nums);
    return 0;
}