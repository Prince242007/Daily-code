#include<bits/stdc++.h>
using namespace std;
// Gpt code
class Solution{
public :
    int maxSumDivThree(vector<int>& nums) {
    int sum = 0;

    vector<int> r1, r2;

    for(int x : nums){
        sum += x;

        if(x % 3 == 1) r1.push_back(x);
        else if(x % 3 == 2) r2.push_back(x);
    }

    sort(r1.begin(), r1.end());
    sort(r2.begin(), r2.end());

    if(sum % 3 == 1){
        int remove1 = r1.size() >= 1 ? r1[0] : INT_MAX;
        int remove2 = r2.size() >= 2 ? r2[0] + r2[1] : INT_MAX;

        sum -= min(remove1, remove2);
    }

    else if(sum % 3 == 2){
        int remove1 = r2.size() >= 1 ? r2[0] : INT_MAX;
        int remove2 = r1.size() >= 2 ? r1[0] + r1[1] : INT_MAX;

        sum -= min(remove1, remove2);
    }

    return sum;
}

};
int main(){
    Solution s;
    vector<int>nums= {3,6,5,1,8};
    cout<<s.maxSumDivThree(nums);
    return 0;
}