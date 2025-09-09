#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, rev = 0, r;
    cout << "Enter the number = ";
    cin >> n;
    for (int i = n; i > 0; i = i / 10)
    {
        r = i % 10;
        rev = rev * 10 + r;
    }
    if (rev == n)
        cout << rev << " Number is palindrome.";
    else
        cout << rev << " Number is not  palindrome.";

    return 0;
}
