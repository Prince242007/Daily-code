#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> result;

    void subsetsHelper(vector<int>& nums, vector<int>& current, int i) {
        if (i == nums.size()) {
            result.push_back(current);
            return;
        }

        // Exclude current element
        subsetsHelper(nums, current, i + 1);

        // Include current element
        current.push_back(nums[i]);
        subsetsHelper(nums, current, i + 1);
        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        result.clear();               // important
        subsetsHelper(nums, current, 0);
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1, 2, 3};     // input

    vector<vector<int>> ans = s.subsets(nums);  // function call
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}
