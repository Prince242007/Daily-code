#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int numberOfMatches(int n) {
        int answer ,matches=0;
        while(n>0)
        {
            if(n==2)
            {
                 matches +=1;
                 return matches;
            }
            if(n%2==0)
            {
                matches+=n/2;
                n/=2;
            }
            else
            {
                matches+=(n-1)/2;
                n=(n-1)/2+1;
            }
        }
        return matches;
    }
};
int main(){
    Solution s;
    int n; 
    cout<<"Enter the number = ";
    cin>>n;
    cout<<s.numberOfMatches(n);
    
    return 0;
}