#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minimumPushes(string word) {
        if(word.length()>24) return (48+(word.length()-24)*4);
        else if(word.length()>16) return (24+(word.length()-16)*3);
        else if(word.length()>8) return (8+(word.length()-8)*2);
        return   word.length();
    }
};
int main(){
    Solution s;
    string word = "abcdefghijklmnopqrstu";
    cout<<s.minimumPushes(word);
    return 0;
}