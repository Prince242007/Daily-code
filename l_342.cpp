#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        while(n%4==0)
        {
            n/=4;
        }
        return n==1;
        
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.isPowerOfFour(n);
    return 0;
}