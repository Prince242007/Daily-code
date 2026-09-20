#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int value = 'z' - s[i] + 1;
            ans += value * (i + 1);
        }

        return ans;
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the s :- ";
    cin>>s1;
    cout<<s.reverseDegree(s1);
    return 0;
}