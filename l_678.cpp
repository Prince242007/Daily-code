#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string str)
    {
        int low = 0;
        int high = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                low++;
                high++;
            }
            else if (str[i] == ')')
            {
                low--;
                high--;
            }
            else // '*'
            {
                low--;
                high++;
            }

            low = max(0, low);

            if (high < 0)
            {
                return false;
            }
        }

        return low == 0;
    }
};
int main()
{
    Solution s;
    string str = "(*)";
    cout << s.checkValidString(str);
    return 0;
}