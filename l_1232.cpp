#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int x_diff, y_diff;
        int dx = coordinates[1][0] - coordinates[0][0];
        int dy = coordinates[1][1] - coordinates[0][1];
        for (int i = 0; i < coordinates.size()-1; i++)
        {
            x_diff = coordinates[i + 1][0] - coordinates[i][0];
            y_diff = coordinates[i + 1][1] - coordinates[i][1];
            if (dx * y_diff != dy * x_diff)
            {
                return 0;
            }
        }
        return 1;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> coordinates = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};
    cout << s.checkStraightLine(coordinates);
    return 0;
}