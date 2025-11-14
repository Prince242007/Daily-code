#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long removeZeros(long long n)
    {
        string s = to_string(n);
        string answer = "";
        long long ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                answer = s[i] + answer;
            }
        }
        ans = stoll(answer);
        ;
        return ans;
    }
};
int main()
{
    Solution s;
    long long n;
    cout << "Enter the long long  number :- ";
    cin >> n;
    cout << s.removeZeros(n);

    return 0;
}