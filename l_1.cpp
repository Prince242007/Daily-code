#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums.at(i) + nums.at(j)) == target)
                {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> answer = s.twoSum(nums, target);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "\n";
    }
    return 0;
}