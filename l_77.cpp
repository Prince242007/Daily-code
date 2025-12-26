#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backtrack(int start, int n, int k)
    {
        if ((int)path.size() == k)
        {
            ans.push_back(path);
            return;
        }
        // pruning: need at least (k - path.size()) numbers left
        for (int i = start; i <= n - (k - path.size()) + 1; ++i)
        {
            path.push_back(i);
            backtrack(i + 1, n, k);
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        if (k <= 0 || k > n)
            return {};
        ans.clear();
        path.clear();
        backtrack(1, n, k);
        return ans;
    }
};
int main()
{
    Solution s;
    int n, k;
    cout << "Enter the n and k :- ";
    cin >> n >> k;
    vector<vector<int>> ans = s.combine(n, k);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << "\n";
    }

    return 0;
}
