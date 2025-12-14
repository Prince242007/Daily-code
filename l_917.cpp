#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (!isalpha(s[left])) {
                left++;
            }
            else if (!isalpha(s[right])) {
                right--;
            }
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    string st;
    cout << "Enter the string :- ";
    cin >> st;
    cout << s.reverseOnlyLetters(st);

    return 0;
}