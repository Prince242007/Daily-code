#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        int i = 0, p = 0;
        bool r_side = true; // true = moving right, false = moving left

        while (i < k)
        {
            if (r_side)
                p++;
            else
                p--;

            // change direction when reaching ends
            if (p == n - 1)
                r_side = false;
            else if (p == 0)
                r_side = true;

            i++;
        }

        return p;
    }
};

int main()
{
    Solution s;
    int n, k;
    cout << "Enter number of children: ";
    cin >> n;
    cout << "Enter k seconds: ";
    cin >> k;

    cout << "Child with the ball after " << k << " seconds: " << s.numberOfChild(n, k) << endl;
    return 0;
}
