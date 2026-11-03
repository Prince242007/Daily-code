#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = 0;
        int total = 0;

        for (int x : nums) {
            maxi = max(maxi, x);
        }

        for (int x : nums) {
            total += maxi - x;
        }

        return total;
    }
};

int main(){
    Solution s;
    vector<int> nums ={2,1,3};
    cout<<s.minMoves(nums);
    return 0;
}