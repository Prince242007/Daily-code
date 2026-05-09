#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        if(n==0)
        {
            return false;   
        }
        return n%4;
    }
};

int main(){
    Solution s;
    int n;

    cout << "Enter the n :- ";
    cin >> n;

    cout << boolalpha << s.canWinNim(n);

    return 0;
}