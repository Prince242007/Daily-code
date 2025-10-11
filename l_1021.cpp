#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string ans = "";
        int count = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                if (count > 0)
                {
                    ans += c;
                }
                count++;
            }
            else
            {
                count--;
                if (count > 0)
                {
                    ans += c;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    // string s1 = "(()())(())(()(()))";
    string s1 = "()()(())";
    
    cout << s.removeOuterParentheses(s1);
    return 0;
}
