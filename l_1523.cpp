#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countOdds(int low, int high)
    {
        int i = low, count = 0;
        while (i <= high)
        {
            if (i % 2 != 0)
            {
                count++;
            }
            i++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    int l, h;
    cout << "Enter the Low = ";
    cin >> l;
    cout << "Enter the High = ";
    cin >> h;
    cout << s.countOdds(l, h);

    return 0;
}