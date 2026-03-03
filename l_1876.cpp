#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int countGoodSubstrings(string s) {
        int count=0,n=s.length();
        for (int i = 0; i < n-2; i++)
        {
            if((s[i]!=s[i+1]) &&(s[i+1]!=s[i+2]) &&(s[i]!=s[i+2]))
            {
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string :- ";
    cin>>s1;
    cout<<s.countGoodSubstrings(s1);
    return 0;
}