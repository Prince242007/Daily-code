#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    string d;
    cout << "Enter the decimal number = ";
    cin >> a;
    cout << "Enter the binary  number = ";
    cin >> b;
    cout << "Enter the decimal  number = ";
    cin >> c;
    cout << "Enter the hexadeciaml string = ";
    cin >> d;

    string result = "";

    if (a == 0)
    {
        result = "0";
    }

    while (a > 0)
    {
        int r = a % 16;

        // For bases > 10, use characters A-F etc.
        if (r < 10)
            result = char(r + '0') + result;
        else
            result = char(r - 10 + 'A') + result;

        a = a / 16;
    }
    string result1 = "";

    if (c == 0)
    {
        result1 = "0";
    }

    while (c > 0)
    {
        int r = c % 2;

        // For bases > 10, use characters A-F etc.
        if (r < 10)
            result1 = char(r + '0') + result1;
        else
            result1 = char(r - 10 + 'A') + result1;

        c = c / 2;
    }

    double sum = 0;
    int power = 0, rem = 0;
    for (; b > 0; b /= 10)
    {
        rem = b % 10;
        if (rem == 1)
        {
            sum += pow(2, power);
        }
        power++;
    }

    double sum1 = 0;
    int power1 = 0;
    for (int i = d.length() - 1; i >= 0; i--)
    {
        if (d[i] >= '0' && d[i] <= '9')
        {
            sum1 += (d[i] - '0') * pow(16, power1);
        }
        else if (d[i] >= 'A' && d[i] <= 'F')
        {
            sum1 += (d[i] - 'A' + 10) * pow(16, power1);
        }
        power1++;
    }

    cout << "Converted number in Hexadecimal= " << result << endl;
    cout << "Converted number in binary = " << result1 << endl;
    cout << "Converted number in deimal = " << sum << endl;
    cout << "Converted number in deimal = " << sum1 << endl;
    return 0;
}
