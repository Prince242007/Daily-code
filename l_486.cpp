#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int>& nums, int left, int right) {
        // Only one number left
        if (left == right)
            return nums[left];

        // Pick left
        int takeLeft = nums[left] - solve(nums, left + 1, right);

        // Pick right
        int takeRight = nums[right] - solve(nums, left, right - 1);

        return max(takeLeft, takeRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 5, 233, 7};
    cout << s.predictTheWinner(nums);
    return 0;
}