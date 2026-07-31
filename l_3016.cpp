#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> freq(26);
        for (char i : word)
        {
            freq[i - 'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            ans += freq[i] * (i / 8 + 1);
        }

        return ans;
    }
};
int main()
{
    Solution s;
    string word;
    cout<<"Enter the word :- ";
    cin>>word;
    cout<<s.minimumPushes(word);
    return 0;
}