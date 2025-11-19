#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        int i = 1, sum = 0;
        while (i <= k)
        {
            if (i <= numOnes)
            {
                sum += 1;
            }
            else if (i <= (numOnes + numZeros))
            {
                sum += 0;
            }
            else
            {
                sum -= 1;
            }
            i++;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    int numOnes, numZeros, numNegOnes, k;
    cout << "Enter the positive number :- ";
    cin >> numOnes;
    cout << "Enter the zeroes's number :- ";
    cin >> numZeros;
    cout << "Enter the negative number :- ";
    cin >> numNegOnes;
    cout << "Enter the total number :- ";
    cin >> k;
    cout << s.kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k);
    return 0;
}