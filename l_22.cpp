#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> ans;
    
    void generate(string current, int open, int close, int n)
    {
        if (current.length() == 2 * n)
        {
            ans.push_back(current);
            return;
        }

        if (open < n)
        {
            generate(current + "(", open + 1, close, n);
        }

        if (close < open)
        {
            generate(current + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        generate("", 0, 0, n);
        return ans;
    }
};
int main(){
    Solution s;
    int n ;
    cout<<"Enter the  value :- " ;
    cin>>n;
    vector<string> ans1=s.generateParenthesis(n);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}