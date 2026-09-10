#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distance(vector<int> &a, vector<int> &b)
    {
        int x = a[0] - b[0];
        int y = a[1] - b[1];

        return x * x + y * y;
    }

    bool validSquare(vector<int> &p1, vector<int> &p2,
                     vector<int> &p3, vector<int> &p4)
    {
        vector<vector<int>> p = {p1, p2, p3, p4};

        vector<int> d;

        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                d.push_back(distance(p[i], p[j]));
            }
        }

        sort(d.begin(), d.end());

        return d[0] > 0 &&
               d[0] == d[1] &&
               d[1] == d[2] &&
               d[2] == d[3] &&
               d[4] == d[5] &&
               d[4] == 2 * d[0];
    }
};
int main()
{
    Solution s;
    vector<int> p1 = {0, 0}, p2 = {1, 1}, p3 = {1, 0}, p4 = {0, 1};
    cout << s.validSquare(p1, p2, p3, p4);
    return 0;
}