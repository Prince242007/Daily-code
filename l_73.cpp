#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void set_zero(vector<vector<int>> &matrix, int row, int col)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[row][i] = 0;
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row, col;
        vector<pair<int,int>> temp;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    temp.push_back({i,j});
                }
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            set_zero(matrix,temp[i].first,temp[i].second);
        }
        
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    s.setZeroes(matrix);

    return 0;
}