#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long temp = 1000;

        while (temp <= n) {
            ans += n - temp + 1;
            temp *= 1000;
        }
        return ans;
    }
};
int main(){
    Solution s;
    long long  n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.countCommas(n);
    return 0;
}