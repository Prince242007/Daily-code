#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sum(int i)
    {
        int s = 0;
        while (i > 0)
        {
            s += i % 10;
            i /= 10;
        }
        return s;
    }
    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if(sum(nums[i])==i)
            return i ;
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 2};
    cout << s.smallestIndex(nums);

    return 0;
}