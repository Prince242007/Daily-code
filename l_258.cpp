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
    int n1;
    cout<<"Enter the number :- ";
    cin>>n1;
    cout<<s.addDigits(n1);
    return 0;
}