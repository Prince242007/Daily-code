#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> generate(int numRows)
    {
        vector<vector<int>> answer;

        for (int i = 0; i < 33; i++)
        {
            vector<int> temp;
            if (i == 0)
            {
                temp.push_back(1);
                answer.push_back(temp);
                continue;
            }
            if (i == 1)
            {
                temp.push_back(1);
                temp.push_back(1);
                answer.push_back(temp);
                continue;
            }

            temp.push_back(1);
            for (int j = 0; j < i - 1; j++)
            {
                int sum = answer[i - 1][j] + answer[i - 1][j + 1];
                temp.push_back(sum);
            }
            temp.push_back(1);
            answer.push_back(temp);
        }
        return answer[numRows];
    }
};

int main()
{
    Solution s;
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    vector<int> answer1 = s.generate(rows);
    for (int i = 0; i < answer1.size(); i++)
    {
        
        cout<<answer1[i] << "\n";
    }

    return 0;
}
