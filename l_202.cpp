#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isHappy(int n) {
    int sum = 0, r = 0, count = 0;

    while (count < 100) {
        if (n == 0) {
            if (sum == 1) return true;
            n = sum;
            sum = 0;
            count++;
        }
        r = n % 10;
        sum += r * r;
        n /= 10;
    }
    return false;
}
};
int main(){
    Solution s;
    int n1;
    cout<<"Enter the number:- ";
    cin>>n1;
    cout<<s.isHappy(n1); 
    return 0;
}