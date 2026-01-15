#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string maximumOddBinaryNumber(string s) {
        int ones = 0, zeros = 0;
        
        for(char c : s) {
            if(c == '1') ones++;
            else zeros++;
        }
        
        return string(ones - 1, '1') + string(zeros, '0') + '1';
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string :- ";
    cin>>s1;
    cout<<s.maximumOddBinaryNumber(s1);
    return 0;
}