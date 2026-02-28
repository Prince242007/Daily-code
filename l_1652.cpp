#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        int sum = 0, count = 0, j = 1;
        vector<int> ans1;
        for (int i = 0; i < code.size(); i++)
        {
            sum = 0;
            count = 0;
            if (k > 0)
            {
                j = i + 1;
                while (count < k)
                {
                    if (j >= code.size())
                        j = 0;
                    sum += code[j];
                    j++;
                    count++;
                }
            }
            else if (k < 0)
            {
                j = i - 1;
                while (count < abs(k))
                {
                    if (j < 0)
                        j = code.size() - 1;
                    sum += code[j];
                    j--;
                    count++;
                }
            }
            if (k == 0)
                ans1.push_back(0);
            else
                ans1.push_back(sum);
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> code = {2,4,9,3};
    int k;
    cout << "Enter the key value :- ";
    cin >> k;
    vector<int> ans = s.decrypt(code, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}