#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        // string answer = "";
        // sort(indices.begin(),indices.end());
        string answer(s.size(), ' ');
        for (int i = 0; i < indices.size(); i++)
        {
            answer[indices[i]] = s[i];
        }

        return answer;
    }
};
int main()
{
    Solution s;
    string str = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    cout << s.restoreString(str, indices);
    return 0;
}