#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> mask(n, 0);
        int ans = 0;

        // Step 1: Build bitmask for each word
        for (int i = 0; i < n; i++) {
            for (char c : words[i]) {
                mask[i] |= (1 << (c - 'a'));
            }
        }

        // Step 2: Compare every pair
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((mask[i] & mask[j]) == 0) {
                    ans = max(ans, 
                              (int)words[i].length() * (int)words[j].length());
                }
            }
        }

        return ans;
    }
};

int main(){
    Solution s;
    vector<string> words={"abcw","baz","foo","bar","xtfn","abcdef"};
    cout<<s.maxProduct(words);
    return 0;
}