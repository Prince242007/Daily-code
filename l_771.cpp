#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int count = 0;

        for (char s : S)
        {
            for (char j : J)
            {
                if (s == j)
                {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};
int main()
{
    Solution s;
    string J, s1;
    cout << "Enter the jewels :- ";
    cin >> J;
    cout << "Enter the stones :- ";
    cin >> s1;
    cout << s.numJewelsInStones(J, s1);

    return 0;
}