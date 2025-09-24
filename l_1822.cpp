#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int sign = 1; // start as positive
        for (int num : nums)
        {
            if (num == 0)
                return 0; // product will be zero
            if (num < 0)
                sign = -sign; // flip sign
        }
        return sign;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, -5, -1};
    cout << s.arraySign(nums);
    return 0;
}