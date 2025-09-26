#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int process(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0; 
        }
    }
    int romanToInt(string s) {
        int sum = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            int value1 = process(s[i]);
            int value2 = (i + 1 < n) ? process(s[i + 1]) : 0;

            if (value1 >= value2) {
                sum += value1;
            } else {
                sum += (value2 - value1);
                i++; 
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string :- ";
    cin>>s1;
    cout<<s.romanToInt(s1) ;
    
    return 0;
}