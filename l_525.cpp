#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;

        mp[0] = -1;

        int count = 0;
        int maxy = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                count++;
            else
                count--;

            if (mp.find(count) != mp.end()) {
                int length = i - mp[count];
                maxy = max(maxy, length);
            }
            else {
                mp[count] = i;
            }
        }

        return maxy;
    }
};

int main() {
    Solution s;

    vector<int> nums = {0, 1,1,1,0,0,0};

    cout << s.findMaxLength(nums);

    return 0;
}