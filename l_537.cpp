#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        // Find position of '+' sign in both numbers
        int p1 = num1.find('+');
        int p2 = num2.find('+');

        // Split into real and imaginary parts
        int a = stoi(num1.substr(0, p1));                        // real part of num1
        int b = stoi(num1.substr(p1 + 1, num1.size() - p1 - 2)); // imaginary part of num1
        int c = stoi(num2.substr(0, p2));                        // real part of num2
        int d = stoi(num2.substr(p2 + 1, num2.size() - p2 - 2)); // imaginary part of num2

        // Multiply (a+bi)*(c+di) = (ac - bd) + (ad + bc)i
        int real = a * c - b * d;
        int imag = a * d + b * c;

        // Return result as "x+yi"
        return to_string(real) + "+" + to_string(imag) + "i";
    }
};
int main()
{
    Solution s;
    string num1, num2;
    cout << "Enter the string1 :- ";
    cin >> num1;
    cout << "Enter the string2 :- ";
    cin >> num2;
    cout << s.complexNumberMultiply(num1, num2);
    return 0;
}