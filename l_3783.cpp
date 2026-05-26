#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int mirrorDistance(int n) {
        int rev= 0 ,r=0 , n1=n;
        while (n>0)
        {
            r = n%10;
            rev = rev *10  + r;
            n/=10;
        }
        if((n1 - rev)<0)
        {
            return -(n1 - rev);
        }
        return (n1 - rev);
        
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.mirrorDistance(n);
    return 0;
}