#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string convertToBase7(int num) {
        
         if (num == 0) return "0";

    string result = "";
    bool isNegative = false;

    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    while (num > 0) {
        int rem = num % 7;
        result = char(rem + '0') + result;
        num /= 7;
    }

    if (isNegative) result = "-" + result;
    return result;
    }
};
int main(){
    Solution s;
    int number;
    cout<<"Enter the number :- " ;
    cin>>number;
    cout<<s.convertToBase7(number);
    return 0;
}