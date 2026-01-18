#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        // ---------- MAX ----------
        string maxStr = s;
        char x = 0;

        for (char c : s) {
            if (c != '9') {
                x = c;
                break;
            }
        }

        if (x != 0) {
            for (char &c : maxStr) {
                if (c == x)
                    c = '9';
            }
        }

        // ---------- MIN ----------
        string minStr = s;
        char y = 0;

        if (s[0] != '1') {
            y = s[0];
            for (char &c : minStr) {
                if (c == y)
                    c = '1';
            }
        } else {
            for (int i = 1; i < s.length(); i++) {
                if (s[i] != '0' && s[i] != '1') {
                    y = s[i];
                    break;
                }
            }

            if (y != 0) {
                for (char &c : minStr) {
                    if (c == y)
                        c = '0';
                }
            }
        }

        int maxNum = stoi(maxStr);
        int minNum = stoi(minStr);

        return maxNum - minNum;
    }
};

int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.maxDiff(n);
    return 0;
}