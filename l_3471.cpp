#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestInteger(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            unordered_set<int> st;

            for (int j = i; j < k + i; j++)
            {
                st.insert(nums[j]);
            }

            for (int x : st)
            {
                freq[x]++;
            }
        }

        int maxy = -1;

        for (auto it : freq)
        {
            if (it.second == 1)
            {
                maxy = max(maxy, it.first);
            }
        }

        return maxy;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3,9,7,2,1,7};
    int k;
    cout << "Enter the number :- ";
    cin >> k;
    cout << s.largestInteger(nums, k);
    return 0;
}