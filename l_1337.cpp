#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<pair<int, int>> v;

        for (int i = 0; i < mat.size(); i++)
        {
            int soldiers = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                    soldiers++;
                else
                    break;
            }
            v.push_back({soldiers, i});
        }

        sort(v.begin(), v.end());

        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> mat = {{1, 1, 0, 0, 0},
                               { 1, 1, 1, 1, 0 },
                               { 1, 0, 0, 0, 0 },
                               { 1, 1, 0, 0, 0 },
                               { 1, 1, 1, 1, 1 }};
    int k;
    cout << "Enter the k value :-";
    cin >> k;
    vector<int> ans = s.kWeakestRows(mat, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}