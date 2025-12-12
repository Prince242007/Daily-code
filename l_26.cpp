#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        if(n==0 || n==1) return n;
        int i=0,j=i+1;
        while(j<n){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};
int main(){
    Solution s;
    vector<int> nums ={0,0,1,1,1,2,2,3,3,4,5,5};
    cout << s.removeDuplicates(nums);
    
    return 0;
}