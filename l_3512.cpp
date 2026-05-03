#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (int x : nums) {
            sum += x;
        }
        return sum % k;
    }
};

int main(){
    Solution s;
    int k;
    cout<<"Enter the k :- ";
    cin>>k;
    vector<int> nums={4,1,3};
    cout<<s.minOperations(nums,k);

    return 0;
}