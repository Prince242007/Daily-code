#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        string base = words[0];                 // take first word
        vector<string> ans;

        for (int i = 1; i < words.size(); i++)
        {
            string current = words[i];
            string temp = "";

            for (int j = 0; j < base.length(); j++)
            {
                char ch = base[j];
                size_t pos = current.find(ch);

                if (pos != string::npos)
                {
                    temp += ch;                // add matched char
                    current.erase(pos, 1);     // remove used char
                }
            }

            base = temp;                        // update base with common chars
        }

        for (char c : base)
        {
            ans.push_back(string(1, c));
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> words = {"bella", "label", "roller"};
    vector<string> ans = s.commonChars(words);

    for (auto &x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
