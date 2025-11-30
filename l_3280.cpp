#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toBinary(int x) {
        string b = "";
        while (x > 0) {
            b = char('0' + (x % 2)) + b;
            x /= 2;
        }
        return b;
    }

    string convertDateToBinary(string date)
    {
        string year = date.substr(0, 4);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);

        int y = stoi(year);
        int m = stoi(month);
        int d = stoi(day);

        return toBinary(y) + "-" + toBinary(m) + "-" + toBinary(d);
    }
};

int main()
{
    Solution s;
    string s1;
    cout << "Enter the date :- ";
    cin >> s1;
    cout << s.convertDateToBinary(s1);
    return 0;
}
