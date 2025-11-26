#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string s1 = "", s2 = "";

        for (string w : word1)
        {
            s1 += w;
        }
        for (string w : word2)
        {
            s2 += w;
        }

        return s1 == s2;
    }
};

int main()
{
    Solution s;
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    cout << s.arrayStringsAreEqual(word1, word2);
    return 0;
}
