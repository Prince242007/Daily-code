#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int distinctIntegers(int n) {
        return max(1, n - 1);
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.distinctIntegers(n);    
    return 0;
}