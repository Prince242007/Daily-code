#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n % 2 == 0)
            return n;
        return n * 2;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.smallestEvenMultiple(n);
    return 0;
}