#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int i = 0;
        int j = sqrt(c);

        while (i <= j)
        {
            long long sum = (long long)i * i + (long long)j * j;

            if (sum == c)
            {
                return true;
            }
            else if (sum > c)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    int c;
    cout << "Enter the c value:-";
    cin >> c;
    cout << s.judgeSquareSum(c);
    return 0;
}