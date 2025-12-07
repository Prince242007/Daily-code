#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int balancedStringSplit(string s) {
       int r_count=0,ans=0;
       for (int i = 0; i < s.length(); i++)
       {
           if(s[i]=='R')
           {
               r_count++;
            }
            else if(s[i]=='L')
            {
                r_count--;
            }
            if(r_count==0)
            {
                ans++;
            }


       }
     return ans;   
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string in capital (R or L):- ";
    cin>>s1;
    cout<<s.balancedStringSplit(s1);
    return 0;
}