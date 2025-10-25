#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int removeDuplicates(vector<int>& nums) {
        int k =0,n=nums.size();
        if (n == 0) return 0;
        int count = 1; 
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                count++;
            }
        }
        return count;
        
        
    }
};
int main(){
    Solution s;
    vector<int> nums ={0,0,1,1,1,2,2,3,3,4,5,5};
    cout << s.removeDuplicates(nums);
    
    return 0;
}