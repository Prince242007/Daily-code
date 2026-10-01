#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d = 0;
        vector<int>ans;
        for(auto i:seq)
        {
            if(i=='(')
            {
                d++;
                ans.push_back(d&1);
            }
            if(i==')')
            {
                d--;
                ans.push_back(!(d&1));
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    string seq="()(())";
    vector<int>ans = s.maxDepthAfterSplit(seq);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}