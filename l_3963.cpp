#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> createGrid(int m, int n)
    {
        vector<string> grid(m, string(n, '#'));

        // Make the first row free
        for (int j = 0; j < n; j++)
        {
            grid[0][j] = '.';
        }

        // Make the last column free
        for (int i = 0; i < m; i++)
        {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};
int main()
{
    Solution s;
    int m, n;
    cout << "Enter the value of m and n :- ";
    cin >> n >> m;
    vector<string> createGrid = s.createGrid(n, m);
    for (int i = 0; i < createGrid.size(); i++)
    {
        cout << createGrid[i] << endl;
    }

    return 0;
}