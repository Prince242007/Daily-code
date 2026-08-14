#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int hammingDistance(int x, int y) {
        int n = x^y;
        int count=0;
        while(n>0)
        {
            // if(n%2)count++;
            // n /= 2;
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    int x,y;
    cout<<"Enter the x and y :- ";
    cin>>x>>y;
    cout<<s.hammingDistance(x,y);
    return 0;
}