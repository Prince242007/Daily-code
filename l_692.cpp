#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        
        // Step 1: Count frequency
        for (auto &word : words) {
            freq[word]++;
        }
        
        // Step 2: Move to vector
        vector<pair<string, int>> vec(freq.begin(), freq.end());
        
        // Step 3: Sort
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first < b.first;   // alphabetical
            return a.second > b.second;     // descending frequency
        });
        
        // Step 4: Take first k
        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(vec[i].first);
        }
        
        return result;
    }
};
int main(){
    Solution s;
    vector<string> words={"the","day","is","sunny","the","the","the","sunny","is","is"};
    int n;
    cout<<"Enter the most frequent number :- ";
    cin>>n;

    vector<string> ans = s.topKFrequent(words,n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<"   ";
    }
    
    return 0;
}