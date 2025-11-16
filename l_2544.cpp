#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int total = 0, sign = 1;

        for (char c : s) {
            total += sign * (c - '0');
            sign = -sign;
        }

        return total;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.alternateDigitSum(n);

    return 0;
}