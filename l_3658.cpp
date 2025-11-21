#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gcdOfOddEvenSums(int n)
    {
        int a = 0, b = 0;
        int even = 2, odd = 1;
        for (int i = 1; i <= n; i++)
        {
            a = a + even;
            b = b + odd;
            even += 2;
            odd + 2;
        }

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.gcdOfOddEvenSums(n);
    return 0;
}