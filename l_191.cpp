#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int hammingWeight(int n) {
        int count=0;
        while(n>0)
        {
            if(n%2==1)
            {
                count++;
            }
            n/=2;
        }
        return count; 
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<s.hammingWeight(n);
    
    return 0;
}
