#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        vector<int> answer;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                int last = answer.back();
                int secondLast = answer[answer.size() - 2];
                answer.push_back(last + secondLast);
            }
            else if (operations[i] == "C")
            {
                answer.pop_back();
            }
            else if (operations[i] == "D")
            {
                int last = answer.back();
                answer.push_back(2 * last);
            }
            else
            {
                answer.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for (int x : answer)
            sum += x;

        return sum;
    }
};

int main()
{
    Solution s;
    // vector<string> op = {"5", "2", "C", "D", "+"};
     vector<string> op = {"5","-2","4","C","D","9","+","+"};
    cout << s.calPoints(op);
    return 0;
}
