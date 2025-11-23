#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int splitNum(int num)
    {
        string number = to_string(num);
        vector<int> n;
        int n1 = 0, n2 = 0;

        for (int i = 0; i < number.length(); i++)
        {
            n.push_back(number[i] - '0');
        }
        sort(n.begin(), n.end());
        for (int i = 0; i < n.size(); i++)
        {
            if (i % 2 == 0)
                n1 = n1 * 10 + n[i];
            else
                n2 = n2 * 10 + n[i];
        }
        return (n1 + n2);
    }
};
int main()
{
    Solution s;
    int nu;
    cout << "Enter the number :- ";
    cin >> nu;
    cout << s.splitNum(nu);

    return 0;
}