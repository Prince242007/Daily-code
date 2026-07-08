#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    bool is_co_prime(int a, int b)
    {
        return gcd(a, b) == 1;
    }

    int countBeautifulPairs(vector<int> &nums)
    {

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            string temp = to_string(nums[i]);
            int t = temp[0] - '0';

            for (int j = i + 1; j < nums.size(); j++)
            {

                if (is_co_prime(t, nums[j] % 10))
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{

    Solution s;

    vector<int> nums = {2, 5, 1, 4};

    cout << s.countBeautifulPairs(nums);

    return 0;
}