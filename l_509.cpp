#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int fib(int n) {
        int sum=0 ;
        int a=0,b=1,i=0;
        if(n==1)
        return 1 ;
        while(i+2<=n)
        {
            sum =a+b;
            a=b;
            b=sum;
            i+=1;
        }
        return sum ;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the n :- ";
    cin>>n;
    cout<<s.fib(n);
    
    return 0;
}