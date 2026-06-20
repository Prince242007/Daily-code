#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCommas(int n)
    {
        return max(0, n - 999);
    }
};
int main()
{
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.countCommas(n);
    return 0;
}