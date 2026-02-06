#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int temp;
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> ans1 = s.transpose(matrix);
    for (int i = 0; i < ans1.size(); i++)
    {
        for (int j = 0; j < ans1[i].size(); j++)
        {
            cout << ans1[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}