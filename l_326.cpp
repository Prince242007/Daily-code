#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0)
        {
            n/=3;
            
        }
        if(n==1) return true ;
        else
        return false ;   
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the Number :- ";
    cin>>n;
    cout<<s.isPowerOfThree(n);

    
    return 0;
}