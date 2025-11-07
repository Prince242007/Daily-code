#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0, r, temp = num;
        while (num > 0)
        {
            r = num % 10;
            if (temp % r == 0)
            {
                count++;
            }
            num/=10;
        }
        return count;
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    cout << s.countDigits(n);

    return 0;
}