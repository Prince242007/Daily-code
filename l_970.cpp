#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> powerfulIntegers(int x, int y, int bound)
    {
        vector<int> ans;

        int i = 0;

        while (pow(x, i) <= bound)
        {
            int j = 0;

            while (pow(x, i) + pow(y, j) <= bound)
            {
                int sum = pow(x, i) + pow(y, j);

                // avoid duplicates manually
                if (find(ans.begin(), ans.end(), sum) == ans.end())
                    ans.push_back(sum);

                if (y == 1)
                    break; // prevent infinite loop
                j++;
            }

            if (x == 1)
                break; // prevent infinite loop
            i++;
        }

        return ans;
    }
};
int main()
{
    Solution s;
    int x, y, bound;
    cout << "Enter the value of x:- ";
    cin >> x;
    cout << "Enter the value of y:- ";
    cin >> y;
    cout << "Enter the value of bound:- ";
    cin >> bound;
    vector<int> ans1 = s.powerfulIntegers(x, y, bound);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }

    return 0;
}