#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        vector<vector<int>> ans1(image.size()); 
        int temp;
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = image[0].size()-1; j >= 0; j--)
            {
                if (image[i][j] == 1)
                {
                    temp = 0;
                }
                else
                    temp = 1;
                ans1[i].push_back(temp);
            }
        }
        return ans1;
    }
};
int main()
{
    Solution s;

    vector<vector<int>> img = {{1, 0, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> ans = s.flipAndInvertImage(img);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j<ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}