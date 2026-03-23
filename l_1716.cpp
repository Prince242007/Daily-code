#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int totalMoney(int n) {
        int ans = 0,i=1,k=1;
        for (int count = 1; count <=n;count++)
        {
            ans+=i;
            i++;
            if(count%7==0)
            {
                k++;
                i=k;
            }
        }
        return ans;    
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the  n :- ";
    cin>>n;
    cout<<s.totalMoney(n);
    return 0;
}