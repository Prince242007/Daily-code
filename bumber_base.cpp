#include<iostream>
using namespace std;

int main() {
    int n, b;
    cout << "Enter the number in decimal: ";
    cin >> n;
    cout << "Enter the base to convert to: ";
    cin >> b;

    string result = "";

    if (n == 0) {
        result = "0";
    }

    while (n > 0) {
        int r = n % b;

        // For bases > 10, use characters A-F etc.
        if (r < 10)
            result = char(r + '0') + result;
        else
            result = char(r - 10 + 'A') + result;

        n = n / b;
    }

    cout << "Converted number = " << result << endl;

    return 0;
}
