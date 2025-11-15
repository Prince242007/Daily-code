#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfCuts(int n)
    {
        if(n%2!=0)

        {
            return n;
        }
        else 
        {
            return n/2 ;
        }
    }
};
int main()
{
    Solution s;
    int n;
    cout << "enter the number of part :- ";
    cin >> n;
    cout << s.numberOfCuts(n);

    return 0;
}