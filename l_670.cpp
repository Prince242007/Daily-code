#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumSwap(int num)
    {
        string number = to_string(num);
        int n = number.size();
        int maxy = num;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                if ((number[j] - '0') > (number[i] - '0'))
                {
                    swap(number[i], number[j]);

                    int temp = stoi(number);
                    maxy = max(maxy, temp);

                    swap(number[i], number[j]); 
                }
            }
        }
        return maxy;
    }
};
int main()
{
    Solution s;
    int num;
    cout << "Enter the number :- ";
    cin >> num;
    cout << s.maximumSwap(num);
    return 0;
}