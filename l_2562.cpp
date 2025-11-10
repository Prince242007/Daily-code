#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0, i = 1;
        while (i <= n)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                sum += i;
            }
            i++;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.sumOfMultiples(n);
    return 0;
}