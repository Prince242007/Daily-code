#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        vector<int> ans1(queries.size(),0);
        sort(nums.begin(), nums.end());
        int  sum = 0;
        for (int i = 0; i < queries.size(); i++)
        {

            sum=0;
            for (int j = 0; j < nums.size(); j++)
            {
                
                sum += nums[j];

                if (sum > queries[i])
                {
                    break;
                }
                if(sum<= queries[i])
                {
                    ans1[i]=j+1;
                }
            }
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2,3,4,5};
    vector<int> queries = {1};
    vector<int> ans = s.answerQueries(nums, queries);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}