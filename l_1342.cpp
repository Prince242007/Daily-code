#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int numberOfSteps(int num) {
        int count=0;
        while(num>=0)
        {
            if(num==0)
            {
                return count ;
            }
            else if(num%2==1)
            {
                num-=1;
                count++;
            }
            else 
            {
                num/=2;
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.numberOfSteps(n);
    
    return 0;
}