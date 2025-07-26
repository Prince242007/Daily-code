#include <iostream>
#include<cmath>
using namespace std;
int decimal(string &b)
{
    int sum = 0;
    int power = 0;
    for (int i = b.length() - 1; i >= 0; i--) {
        if (b[i] == '1') {
            sum += pow(2, power);
        }
        power++;
    }
    return sum;
}
int main() {
    string str1;
    cout << "Enter the first binary string = ";
    cin >> str1;
    cout << "Decimal number = " << decimal(str1) ;
}

    