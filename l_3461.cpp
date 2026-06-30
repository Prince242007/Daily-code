#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasSameDigits(string s) {

        while (s.length() > 2) {
            string temp = "";

            for (int i = 0; i < s.length() - 1; i++) {
                int t1 = s[i] - '0';
                int t2 = s[i + 1] - '0';
                temp += to_string((t1 + t2) % 10);
            }

            s = temp;
        }

        return s[0] == s[1];
    }
};

int main() {
    Solution s;
    string s1;

    cout << "Enter the string :- ";
    cin >> s1;

    cout << s.hasSameDigits(s1);

    return 0;
}