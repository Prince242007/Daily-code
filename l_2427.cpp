#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int commonFactors(int a, int b) {
        int count=0;
        for (int i = 1; (i <=a && i<=b); i++)
        {
            if((a%i==0)&&(b%i==0))
            {
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    int a ,b;
    cout<<"Enter the value of a:- ";
    cout<<"Enter the value of b:- ";
    cin>>a>>b;
    cout<<s.commonFactors(a,b);
    return 0;
}