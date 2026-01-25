#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> findEvenNumbers(vector<int>& digits) {
    set<int> st;   // to store unique numbers

    for (int i = 0; i < digits.size(); i++) {
        // first digit cannot be zero
        if (digits[i] == 0) continue;

        for (int j = 0; j < digits.size(); j++) {
            if (i == j) continue;

            for (int k = 0; k < digits.size(); k++) {
                if (i == k || j == k) continue;

                // last digit must be even
                if (digits[k] % 2 != 0) continue;

                int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                st.insert(num);
            }
        }
    }
    vector<int> ans(st.begin(), st.end());
    return ans;
}

};
int main(){
    Solution s;
    vector<int> nums={2,1,3,0};
    vector<int> ans= s.findEvenNumbers(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}