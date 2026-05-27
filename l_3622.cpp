#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool checkDivisibility(int n) {
        int ans1=0,ans2=1,n1=n;
        while (n>0)
        {
            ans1+= n%10;
            ans2*= n%10;
            n/=10;
        }
        if(n1%(ans1+ans2)==0)
        {
            return true;
        }
        return false;
        
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.checkDivisibility(n);
    return 0;
}