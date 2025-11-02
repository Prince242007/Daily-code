#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans;

        if (n % 2 == 1)
            ans.push_back(0);

            for (int i = 1; i <= n / 2; i++)
        {
            ans.push_back(i);
            ans.push_back(-i);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> ans = s.sumZero(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
