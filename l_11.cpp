#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int lp = 0, rp = height.size() - 1, width, length, water, answer = 0;
        while (lp < rp)
        {
            width = rp - lp;
            length = min(height[lp], height[rp]);
            water = width * length;
            answer = max(answer, water);
            (height[lp] > height[rp] ? rp-- : lp++);
        }
        return answer;
    }
};
int main()
{
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height);

    return 0;
}