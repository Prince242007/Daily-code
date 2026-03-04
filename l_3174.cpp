#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string clearDigits(string s)
    {
        stack<char> st;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty())
                    st.pop();
            }
        }
        while (!st.empty())
        {
            ans = st.top() + ans; 
            st.pop();             
        }
        return ans;
    }
};
int main()
{
    Solution s;
    string s1;
    cout << "Enter the string :- ";
    cin >> s1;
    cout << s.clearDigits(s1);
    return 0;
}