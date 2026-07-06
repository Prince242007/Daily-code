#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        int count = 0;
        int n = intervals.size();
        vector<bool> check(n, 0);
        for (int i = 0; i < n; i++)
        {
            if(check[i]) continue;
            for (int j = 0; j < n; j++)
            {
                if(check[j] || i == j) continue;
                if (intervals[i][0] <= intervals[j][0] && intervals[i][1] >= intervals[j][1])
                {
                    check[j]=true;                    
                }
            }
        }
        for (int i = 0; i <n; i++)
        {
            if(check[i]==false) count++;
        }
        
        return count;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> intervals = {{3, 4}, {0, 6}, {2, 8}};
    cout << s.removeCoveredIntervals(intervals);
    return 0;
}