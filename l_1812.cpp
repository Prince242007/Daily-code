#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool squareIsWhite(string s)
    {
        int col = s[0] - 'a'; // a=0, b=1, ...
        int row = s[1] - '0'; // '1' -> 1

        return (col + row) % 2 == 0;
    }
};
int main()
{
    Solution s;
    string s1;
    cout << "Enter the string s1 :- ";
    cin >> s1;
    cout << s.squareIsWhite(s1);
    return 0;
}