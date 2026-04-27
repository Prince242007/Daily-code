#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isTrue(string allowed, string word)
    {
        bool flag = false;
        for (int i = 0; i < word.length(); i++)
        {
            flag = false;
            for (int j = 0; j < allowed.length(); j++)
            {
                if (word[i] == allowed[j])
                {
                    flag = true;
                }
            }

            if (flag == false)
            {
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (isTrue(allowed, words[i]))
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    string allowed;
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    cout << "Enter the allowed string :- ";
    cin >> allowed;
    cout << s.countConsistentStrings(allowed, words);
    return 0;
}