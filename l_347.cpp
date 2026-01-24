#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    
    // 1. Count frequency
    for (int n : nums) {
        freq[n]++;
    }

    // 2. Store in vector of pairs (number, frequency)
    vector<pair<int, int>> v;
    for (auto it : freq) {
        v.push_back({it.first, it.second});
    }

    // 3. Sort by frequency (descending)
    sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b) {
        return a.second > b.second;
    });

    // 4. Take top k
    vector<int> ans;
    for (int i = 0; i < k; i++) {
        ans.push_back(v[i].first);
    }

    return ans;
}

};
int main(){
    Solution s;
    int k;
    vector<int> nums={1,2,1,2,1,2,3,1,3,2};
    cout<<"Enter the k :- ";
    cin>>k;
    vector<int> ans = s.topKFrequent(nums,k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}