#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.addDigits(n);
    return 0;
}
