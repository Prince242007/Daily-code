#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        
        int degree = 0;
        
        // Store frequency, first index and last index
        for (int i = 0; i < nums.size(); i++) {
            
            if (freq[nums[i]] == 0) {
                first[nums[i]] = i;
            }
            
            freq[nums[i]]++;
            last[nums[i]] = i;
            
            degree = max(degree, freq[nums[i]]);
        }
        
        int ans = nums.size();
        
        // Find shortest subarray with same degree
        for (auto it : freq) {
            
            int num = it.first;
            
            if (freq[num] == degree) {
                int length = last[num] - first[num] + 1;
                ans = min(ans, length);
            }
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    
    vector<int> nums = {1, 2, 2, 3, 1};
    
    cout << s.findShortestSubArray(nums);
    
    return 0;
}