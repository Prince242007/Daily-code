#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0 , maxy=0;
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
                count++;
                maxy = max(maxy,count);
            }
            else if (s[i] == ')')
            {
                if(count!=0)
                {
                    st.pop();
                    count--;
                }
            }
        }
        return maxy;
    }
};
int main()
{
    Solution s;
    string s1;
    cout << "Enter the string :- ";
    cin >> s1;
    cout << s.maxDepth(s1);

    return 0;
}