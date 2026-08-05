#include <bits/stdc++.h>
using namespace std;

/*
3 -1
5  2
*/
class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ans;
        int maxy = matrix[0][0];
        int a = -1, b = -1;
        for (int i = 0; i < matrix[0].size(); i++)
        {
            a = -1;
            b = -1;
            maxy = matrix[0][i];
            for (int j = 0; j < matrix.size(); j++)
            {
                maxy = max(maxy, matrix[j][i]);
                if (matrix[j][i] == -1)
                {
                    a = i;
                    b = j;
                }
            }
            for (int r = 0; r < matrix.size(); r++)
            {
                if (matrix[r][i] == -1)
                    matrix[r][i] = maxy;
            }
        }
        return matrix;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> nums = {{1, 2, -1}, {4, -1, 6}, {7, 8, 9}};
    vector<vector<int>> ans1 = s.modifiedMatrix(nums);
    for (int i = 0; i < ans1.size(); i++)
    {
        for (int j = 0; j < ans1[0].size(); j++)
        {
            cout << ans1[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}