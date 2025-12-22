#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        string answer;
        
        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == '(' && command[i + 1] == ')')
            {
                answer += 'o';
            }
            else if (command[i] != '(' && command[i] != ')')
            {
                answer += command[i];
            }
            else
            {
                continue;
            }
        }
        return answer;
    }
};
int main()
{
    Solution s;
    string command;
    cout << "Enter the command :- ";
    cin >> command;
    cout << s.interpret(command);
    return 0;
}