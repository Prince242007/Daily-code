#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool sumOfNumberAndReverse(int num)
    {
        for (int i = 0; i <= num; i++)
        {
            string s = to_string(i);
            reverse(s.begin(), s.end());
            int rev = stoi(s);

            if (i + rev == num)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    int num;
    cout << "Enter the number :- ";
    cin >> num;
    cout << s.sumOfNumberAndReverse(num);
    return 0;
}
