#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int answer=0,temp = start ;
        for(int i=0;i<n;i++)
        {
            answer =answer^temp;
            temp+=2;
        }
        return answer;
    }
};
int main()
{
    Solution s;
    int n, st;
    cout << "Enter the n and s :- ";
    cin >> n;
    cin >> st;
    cout<<s.xorOperation(n,st);

    return 0;
}