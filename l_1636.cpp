#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }
        
        // Sort using custom rule
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b])
                return a > b;          // same freq → bigger number first
            return freq[a] < freq[b]; // smaller freq first
        });
        
        return nums;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,2,2,2,3};
    vector<int> ans=s.frequencySort(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}