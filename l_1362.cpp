#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> closestDivisors(int num)
    {
        vector<int> ansa;
        vector<int> ansb;

        // For num+1
        int x = num + 1;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                ansa.push_back(i);
                if (i != x / i) // avoid duplicate in perfect square
                    ansa.push_back(x / i);
            }
        }

        // For num+2
        int y = num + 2;
        for (int i = 1; i * i <= y; i++)
        {
            if (y % i == 0)
            {
                ansb.push_back(i);
                if (i != y / i)
                    ansb.push_back(y / i);
            }
        }

        sort(ansa.begin(), ansa.end());
        sort(ansb.begin(), ansb.end());

        int a1, b1, a2, b2;

        int n1 = ansa.size();
        if (n1 % 2 == 0)
        {
            a1 = ansa[n1 / 2 - 1];
            b1 = ansa[n1 / 2];
        }
        else
        {
            a1 = b1 = ansa[n1 / 2];
        }

        int n2 = ansb.size();
        if (n2 % 2 == 0)
        {
            a2 = ansb[n2 / 2 - 1];
            b2 = ansb[n2 / 2];
        }
        else
        {
            a2 = b2 = ansb[n2 / 2];
        }

        if ((b1 - a1) < (b2 - a2))
        {
            return {a1, b1};
        }
        else
        {
            return {a2, b2};
        }
    }
};
int main()
{
    Solution s;
    int num;
    cout << "Enter the number :- ";
    cin >> num;
    vector<int> ans = s.closestDivisors(num);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}