#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans1;
        int distance = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            distance = min(distance, arr[i + 1] - arr[i]);
        }
        for (int i = 0; i < arr.size()-1; i++)
        {
            if((arr[i+1]-arr[i]) == distance)
            {
                ans1.push_back({arr[i],arr[i+1]});
            }
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {4, 2, 1, 3};
    vector<vector<int>> ans = s.minimumAbsDifference(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}