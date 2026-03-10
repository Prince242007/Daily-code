#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        double answer = 0;
        double sum = 0;
        sort(salary.begin(), salary.end());
        for (int i = 1; i < salary.size() - 1; i++)
        {
            sum += salary[i];
        }
        return sum / (salary.size() - 2);
    }
};
int main()
{
    Solution s;
    vector<int> salary = {4000, 3000, 1000, 2000};
    cout << s.average(salary);
    return 0;
}