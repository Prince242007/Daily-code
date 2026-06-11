#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minimumSum(int num) {
    vector<int> nums;

    while(num > 0)
    {
        nums.push_back(num % 10);
        num /= 10;
    }

    sort(nums.begin(), nums.end());

    int new1 = nums[0] * 10 + nums[2];
    int new2 = nums[1] * 10 + nums[3];

    return new1 + new2;
}
};
int main(){
    Solution s;
    int num;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<s.minimumSum(num);
    return 0;
}