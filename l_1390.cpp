#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            int count = 0;

            for (int j = 1; j * j <= nums[i]; j++)
            {
                if (nums[i] % j == 0)
                {
                    if (j * j == nums[i])
                    {
                        count++;
                        sum += j;
                    }
                    else
                    {
                        count += 2;
                        sum += j + (nums[i] / j);
                    }
                }

                if (count > 4)
                    break; // early stop
            }

            if (count == 4)
            {
                ans += sum;
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {21, 21};
    cout << s.sumFourDivisors(nums);
    return 0;
}