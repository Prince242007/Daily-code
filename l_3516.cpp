#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int xz = abs(x - z);
        int yz = abs(y - z);
        if (xz == yz)
        {
            return 0;
        }
        return (xz < yz ? 1 : 2);
    }
};
int main()
{
    Solution s;
    int x, y, z;
    cout << "Enter the x , y , z :- ";
    cin >> x >> y >> z;
    cout << s.findClosest(x, y, z);

    return 0;
}