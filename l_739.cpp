#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st; // stores indices

    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;
        }
        st.push(i);
    }
    return ans;
}

};
int main()
{
    Solution s;
    vector<int> nums = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = s.dailyTemperatures(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}