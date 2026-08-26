#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double minPrice(vector<int> &prices, vector<int> &discounts)
    {

        double ans = 0;
        int n = prices.size(), m = discounts.size();
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        if (m <= n)
        {
            for (int i = 0; i <m; i++)
            {
                ans = ans + (prices[i] * 1.0 * (100 - discounts[i])) / 100;
            }
            for (int i = m; i < n ; i++)
            {
                ans += prices[i];
            }
        }
        else
        {
            for (int i = 0; i<n; i++)
            {
                ans = ans + (prices[i] * 1.0 * (100 - discounts[i])) / 100;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> prices = {100,70}, discounts = {10,40,50};
    cout << s.minPrice(prices, discounts);
    return 0;
}