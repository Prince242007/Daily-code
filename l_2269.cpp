#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int divisorSubstrings(int num, int k)
    {
        string num_s = to_string(num);
        int count = 0;

        for (int i = 0; i <= num_s.length() - k; i++)
        {
            string temp_s = num_s.substr(i, k);
            int temp = stoi(temp_s);

            if (temp != 0 && num % temp == 0)
            {
                count++;
            }
        }

        return count;
    }
};
int main()
{
    Solution s;
    int num, k;
    cout << "Enter the number and k value :- ";
    cin >> num >> k;
    cout << s.divisorSubstrings(num, k);
    return 0;
}