#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> cnt(n * n + 1, 0);

     
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cnt[grid[i][j]]++;
            }
        }

        int repeated = -1, missing = -1;

        for (int i = 1; i <= n * n; i++)
        {
            if (cnt[i] == 2)
                repeated = i;
            else if (cnt[i] == 0)
                missing = i;
        }

        return {repeated, missing};
    }
};
int main()
{
    Solution s;
    vector<vector<int>> grid={{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans = s.findMissingAndRepeatedValues(grid);
    for (int i = 0; i < grid.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}