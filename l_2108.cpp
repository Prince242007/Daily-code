#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string firstPalindrome(vector<string>& words) {
        string ans="",temp="";
        for(auto st : words)
        {
            temp = st;
            reverse(temp.begin(),temp.end());
            if(temp==st){
                return st;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> words={"abc","car","ada","racecar","cool"};
    cout<<s.firstPalindrome(words);
    return 0;
}