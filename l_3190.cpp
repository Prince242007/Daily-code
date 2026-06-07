#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]%3!=0)
            count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int>num={1,2,3,4};
    cout<<s.minimumOperations(num);
    return 0;
}