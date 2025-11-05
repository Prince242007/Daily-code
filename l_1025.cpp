#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool divisorGame(int n)
    {
        return n % 2 == 0;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.divisorGame(n);
    return 0;
}