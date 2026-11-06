#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = (i == n) ? 0 : i;
            for (int j = 1; j < i; ++j) {
                dp[i] = max(dp[i], dp[i - j] * j);
            }
        }
        return dp[n];
    }
};

int main(){
    Solution s;
    int n ;
    cin>>n;
    cout<<s.integerBreak(n);


    return 0;
}