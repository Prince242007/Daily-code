#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check_sum(int i)
    {
        string s1 = to_string(i);
        int size = s1.length();
        int sum_1 = 0, sum_2 = 0;

        if (size % 2 != 0)
        {
            return false;
        }

        for (int i = 0; i < size / 2; i++)
        {
            sum_1 += s1[i] - '0';
        }

        for (int i = size / 2; i < size; i++)
        {
            sum_2 += s1[i] - '0';
        }

        return sum_1 == sum_2;
    }
    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int i = low; i < high + 1; i++)
        {
            if (check_sum(i))
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    int low, high;
    cout << "Enter the lowest and heighest value :-";
    cin >> low >> high;
    cout << s.countSymmetricIntegers(low, high);
    return 0;
}