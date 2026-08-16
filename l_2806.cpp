#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int accountBalanceAfterPurchase(int purchaseAmount)
    {
        int r = purchaseAmount % 10;
        if (r >= 5)
        {
            purchaseAmount += (10 - r);
        }
        else
        {
            purchaseAmount -= r;
        }
        return 100 - purchaseAmount;
    }
};
int main()
{
    Solution s;
    int amount;
    cout << "Enter the amount :- ";
    cin >> amount;
    cout << s.accountBalanceAfterPurchase(amount);
    return 0;
}