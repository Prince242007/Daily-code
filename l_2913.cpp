#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                int len = st.size();
                ans += len*len;
            }

        }

        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,1};
    cout<<s.sumCounts(nums);
    
    return 0;
}