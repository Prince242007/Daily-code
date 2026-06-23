#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> cnt(10, 0);

        while (n > 0) {
            cnt[n % 10]++;
            n /= 10;
        }

        int ans = -1, mn = INT_MAX;

        for (int d = 0; d < 10; d++) {
            if (cnt[d] > 0 && cnt[d] < mn) {
                mn = cnt[d];
                ans = d;
            }
        }

        return ans;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.getLeastFrequentDigit(n);
    return 0;
}