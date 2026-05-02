#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int total = numBottles;
        int empty = numBottles;

        while (empty >= numExchange)
        {
            int newBottles = empty / numExchange;
            total += newBottles;
            empty = newBottles + (empty % numExchange);
        }

        return total;
    }
};
int main()
{
    Solution s;
    int numBottles, numExchange;
    cout << "Enter the numBottles, numExchange value :- ";
    cin >> numBottles >> numExchange;
    cout << s.numWaterBottles(numBottles, numExchange);
    return 0;
}