#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    Solution s;
    string num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Largest odd number: " << s.largestOddNumber(num);
    return 0;
}
