#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        long sum=1;
        for(int i=2;i<num/i;i++)
        {
            if(num%i==0)
            {
                 
                sum=i+num/i+sum;
            }
        }
        if(sum==num)
        {
            return true;
        }
        else 
        {return false;
        }
    }
};
int main(){
    Solution s;
    int num ;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<s.checkPerfectNumber(num);
    return 0;
}