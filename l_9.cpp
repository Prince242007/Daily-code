#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isPalindrome(int x) {
        long reverse=0;
        int r,n;
       if(x<0) return false;
       n=x;
       while(n>0)
       {
        r=n%10;
        n/=10;
        reverse = reverse*10+r;
       } 
       if(reverse==x)
       {
         return true;
       }
       else
       return false;
    }
};
int main(){
    Solution s;
    int x;
    cout<<"Enter the x:- ";
    cin>>x;
    cout<<s.isPalindrome(x);
    return 0;
}