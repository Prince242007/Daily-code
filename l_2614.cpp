#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool is_Prime(int n)
    {
        if (n < 2)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>> &nums)
    {
        int maxy = 0, n = nums[0].size();
        for (int i = 0; i < n; i++)
        {
            if (is_Prime(nums[i][i]))
            {
                maxy = max(maxy, nums[i][i]);
            }
            if (is_Prime(nums[i][n - 1 - i]))
            {
                maxy = max(maxy, nums[i][n - 1 - i]);
            }
        }
        return maxy;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> nums = {{1, 2, 3}, {5, 17, 7}, {9, 10, 11}};
    cout << s.diagonalPrime(nums);
    return 0;
}