#include<bits/stdc++.h>
using namespace std;

// using gpt first dynammic programming
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {

        vector<vector<int>> dp(
            m + 1,
            vector<int>(n + 1, 0)
        );

        for (string s : strs) {

            int zeros = 0;
            int ones = 0;

            for (char ch : s) {
                if (ch == '0')
                    zeros++;
                else
                    ones++;
            }

            for (int i = m; i >= zeros; i--) {
                for (int j = n; j >= ones; j--) {

                    dp[i][j] = max(
                        dp[i][j],
                        1 + dp[i - zeros][j - ones]
                    );
                }
            }
        }

        return dp[m][n];
    }
};
int main(){
    Solution s;
    vector<string> strs={"10","0001","111001","1","0"};
    int m, n ;
    cout<<"Enter the value of m(0) and n(1) :- ";
    cin>>m>>n;
    cout<<s.findMaxForm(strs,m,n);

    return 0;
}