#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string answer = "";

        while (columnNumber > 0)
        {
            columnNumber--; 

            int r = columnNumber % 26;

            answer = char('A' + r) + answer;

            columnNumber /= 26;
        }

        return answer;
    }
};
int main()
{
    Solution s;
    int columnNumber;
    cout << "Enter the column number :- ";
    cin >> columnNumber;
    cout << s.convertToTitle(columnNumber);
    return 0;
}