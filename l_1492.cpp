#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthFactor(int n, int k)
    {
        int count = 0;
        int i = 1;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                if (count == k)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    int n, k;
    cout << "Enter the value of n & k :- ";
    cin >> n >> k;
    cout << s.kthFactor(n, k);
    return 0;
}