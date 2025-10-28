#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        string s = to_string(num);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
                break;
            }
        }
        int ans = stoi(s);
        return ans;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.maximum69Number(n);

    return 0;
}