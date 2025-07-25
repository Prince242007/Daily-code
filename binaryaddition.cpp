#include <iostream>
using namespace std;

// Function to sum two binary numbers represented as integers
int sum_binary(int r, int r1) {
    int sum = 0, rem1, rem2, carry = 0, answer = 0, place = 1;

    while (r > 0 || r1 > 0 || carry > 0) {
        rem1 = r % 10;
        rem2 = r1 % 10;

        int total = rem1 + rem2 + carry;

        sum = total % 2;
        carry = total / 2;

        answer += sum * place;
        place *= 10;

        r /= 10;
        r1 /= 10;
    }

    return answer;
}

// Converts string input to integer
int Rev_num(string s1, string s2) {
    int r = 0, r1 = 0;

    for (int i = 0; i < s1.size(); i++) {
        r = r * 10 + (s1[i] - '0');
    }
    for (int i = 0; i < s2.size(); i++) {
        r1 = r1 * 10 + (s2[i] - '0');
    }

    return sum_binary(r, r1);
}

int main() {
    string str1, str2;
    cout << "Enter the first binary string = ";
    cin >> str1;
    cout << "Enter the second binary string = ";
    cin >> str2;

    cout << "Sum = " << Rev_num(str1, str2) << endl;

    return 0;
}
