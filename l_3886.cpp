#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int sortableIntegers(vector<int>& nums) {
        int sum =0 ;
        vector<int> fact;
        for(int i=1; i<nums.size();i++)
        {
            if(nums.size()%i==0)
            {
                fact.push_back(i);
            }
        }
        for(int i=0;i<fact.size();i++)
        
            
        }
    }
};
int main(){
    Solution s;
    vector<int> nums ={3,1,2};
    cout<<s.sortableIntegers(nums);
    return 0;
}