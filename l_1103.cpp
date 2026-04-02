#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        vector<int> ans1(num_people);
        int i = 0;
        int j = 1;
        int temp = 0;

        while (temp < candies)
        {
            if (temp + j > candies)
            {
                ans1[i] += (candies - temp);
                break;
            }

            ans1[i] += j;
            temp += j;

            j++;
            // if (i == num_people - 1)
            //     {
            //         i = 0;
            //     }
            // i++;

            i = (i + 1) % num_people;
        }
        return ans1;
    }
};
int main()
{
    Solution s;
    int candies, n;
    cout << "Ener the number of candies :- ";
    cin >> candies;
    cout << "Enter the number of people :- ";
    cin >> n;
    vector<int> ans = s.distributeCandies(candies, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}