#include <iostream>
using namespace std;

string decimalToBase7(int num) {
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

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    string base7 = decimalToBase7(decimal);
    cout << "Base 7: " << base7 << endl;

    return 0;
}
