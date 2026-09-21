#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<vector<int>> &arrays)
    {
        int miny = arrays[0][0];
        int maxy = arrays[0][arrays[0].size() - 1];
        int ans = 0;

        for (int i = 1; i < arrays.size(); i++)
        {
            ans = max(ans, arrays[i].back() - miny);
            ans = max(ans, maxy - arrays[i][0]);

            miny = min(miny, arrays[i][0]);
            maxy = max(maxy, arrays[i].back());
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> arrays = {{1, 2, 3}, {4, 5}, {1, 2, 3}};
    // vector<vector<int>>  arrays={{1},{1}};
    cout << s.maxDistance(arrays);
    return 0;
}