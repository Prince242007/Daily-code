#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int count_sum(int num){
        int sum=0;
        int r=0;
        while(num>0)
        {
            sum += (num%10) ;
            num/=10;            
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int miny =INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            miny=min(miny,count_sum(nums[i]));
        }
        return miny;
    }
};
int main(){
    Solution s;
    
    vector<int> nums={999,19,199};
    cout<<s.minElement(nums);

    return 0;
}
