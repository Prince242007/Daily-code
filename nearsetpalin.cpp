#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Is_palindrome(int r1) {
    int reverse = 0;
    int palindrome = r1;
    while (r1 > 0) {
        reverse = reverse * 10 + r1 % 10;
        r1 /= 10;
    }
    if (palindrome == reverse) {
        return palindrome;
    } else {
        return 0;
    }
}

int Rev_num(string s) {
    int r = 0, r1 = 0, val1, val2;


    for (int i = s.size() - 1; i >= 0; i--) {
        r = r * 10 + (s[i] - '0');  
    }
    for (; r > 0; r /= 10) {
        r1 = r1 * 10 + (r % 10);
    }

    
    for (int i = r1, j = r1; i >= 0 || j < INT_MAX; i--, j++) {
        val1 = Is_palindrome(i);
val2 = Is_palindrome(j);

if (val1 && val2) {
    int d1 = abs(r1 - val1);
    int d2 = abs(val2 - r1);
    if (d1 < d2) return val1;
    else if (d2 < d1) return val2;
    else return (val1 < val2 ? val1 : val2);  // smaller one in tie
}
if (val1) return val1;
if (val2) return val2;

    }
}
int main(int argc, char const *argv[]) {
    string s;
    cout << "Enter the string = ";
    cin >> s;
    int number = Rev_num(s);

    
    cout << "Nearest palindrome is: " << number << endl;
    return 0;
}
