#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int ans = 0, sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> accounts1 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 10}};
    cout << s.maximumWealth(accounts1);
    return 0;
}