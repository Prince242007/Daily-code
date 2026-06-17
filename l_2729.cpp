#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isFascinating(int n)
    {
        string s = to_string(n) + to_string(2 * n) + to_string(3 * n);

        sort(s.begin(), s.end());

        return s == "123456789";
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.isFascinating(n);
    return 0;
}