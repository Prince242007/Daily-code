#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> ans1;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            ans1.push_back(i);
        }
    }
    return ans1;
}
};

int main(){
    Solution s;
    vector<int> nums = {1,2,5,2,3};
    int target;

    cout << "Enter the target value:- ";
    cin >> target;

    vector<int> ans = s.targetIndices(nums, target);
    for (int i : ans)
        cout << i << " ";

    return 0;
}