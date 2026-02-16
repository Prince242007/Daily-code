#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int n = nums.size();
        vector<int> keyIndex;
        for (int i = 0; i < n; i++) {
            if (nums[i] == key) {
                keyIndex.push_back(i);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < keyIndex.size(); j++) {
                if (abs(i - keyIndex[j]) <= k) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums = {3,4,9,1,3,9,5};
    int key, k;

    cout << "Enter key and k: ";
    cin >> key >> k;

    vector<int> ans = s.findKDistantIndices(nums, key, k);

    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
