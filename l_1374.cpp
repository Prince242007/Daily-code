#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string generateTheString(int n) {
        if (n % 2 == 1) {
            return string(n, 'a');
        } else {
            return string(n - 1, 'a') + 'b';
        }
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the  n :- ";
    cin>>n;
    cout<<s.generateTheString(n);
    return 0;

}

