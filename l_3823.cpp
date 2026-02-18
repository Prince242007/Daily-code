#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseByType(string s)
    {
        string temp = "";
        string temp1 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                temp += s[i];
            }
            else
            {
                temp1 += s[i];
            }
        }
        reverse(temp.begin(), temp.end());
        reverse(temp1.begin(), temp1.end());
        int l = 0, u = 0;
        string ans = s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                ans[i] = temp[l++];
            }
            else
            {
                ans[i] = temp1[u++];
            }
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
    cout << s.reverseByType(s1);
    return 0;
}