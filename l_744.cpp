#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char answer = letters[0];
        char temp = target;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] <= target)
            {
                continue;
            }

            if (letters[i] > target)
            {
                answer = letters[i];
                break;
            }
        }
        return answer;
    }
};
int main()
{
    Solution s;
    vector<char> letters = {'c', 'f', 'j'};
    char target;
    cout << "Enter the target character :- ";
    cin >> target;
    cout << s.nextGreatestLetter(letters, target);
    return 0;
}