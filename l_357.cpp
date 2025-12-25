#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1;
        
        int ans = 10;            // all single digit numbers (0-9)
        int uniqueDigits = 9;    // choices for the first digit (1-9)
        int available = 9;       // remaining digits (0-9 except chosen)
        
        for (int i = 2; i <= n; i++) {
            uniqueDigits *= available;
            ans += uniqueDigits;
            available--;
        }
        
        return ans;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    cout<<s.countNumbersWithUniqueDigits(n);
    return 0;
}