#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string smallestPalindrome(string s)
    {

        string ans = "", temp = "";
        vector<int> freq(26, 0);
        char mid = '\0';
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 1)
            {
                mid = char(i + 'a');
            }
            for (int j = 0; j < freq[i] / 2; j++)
            {
                temp += char(i + 'a');
            }
        }
        ans = temp;
        if (mid)
        {
            ans += mid;
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        return ans;
    }
};
int main()
{
    Solution s;
    string s1;
    cout << "Enter the string :- ";
    cin >> s1;
    cout << s.smallestPalindrome(s1);
    return 0;
}