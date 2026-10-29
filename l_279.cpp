#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                dp[i] = min(dp[i], dp[i - j*j] + 1);
            }
        }

        return dp[n];
    }
};
int main(){
    Solution s;
    int n1;
    cout<<"Enter the number :- ";
    cin>>n1;
    cout<<s.numSquares(n1);
    
    return 0;
}
