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
    int n1;

    cout << "Enter the n :- ";
    cin >> n1;

    cout << boolalpha << s.canWinNim(n1);

    return 0;
}