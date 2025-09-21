#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int len = 1; len <= n / 2; len++) {
            if (n % len == 0) {  // substring must divide the length
                string sub = s.substr(0, len);
                string built = "";
                for (int i = 0; i < n / len; i++) {
                    built += sub;
                }
                if (built == s) return true;
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    string string1;
    cout<<"Enter the string ;-";
    cin>> string1;
    cout<<s.repeatedSubstringPattern(string1);
    return 0;
}