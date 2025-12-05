#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        for (int x : nums) total += x;   // total sum

        int left = 0;
        int ans = 0;

        // try split before each index
        for (int i = 0; i < nums.size() - 1; i++) {
            left += nums[i];            // left part
            int right = total - left;  // right part

            // check if (left - right) is even
            if ((left - right) % 2 == 0)
                ans++;
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {10, 10, 3, 7, 6};
    cout << s.countPartitions(nums);

    return 0;
}