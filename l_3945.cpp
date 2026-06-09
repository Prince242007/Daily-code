#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.digitFrequencyScore(n);
    return 0;
}