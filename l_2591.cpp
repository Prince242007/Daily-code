#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children)
            return -1;

        money -= children;

        int ans = min(money / 7, children);

        money -= ans * 7;
        children -= ans;

        // All children have $8
        if (children == 0) {
            return money == 0 ? ans : ans - 1;
        }

        // One child remains and has $4
        if (children == 1 && money == 3) {
            ans--;
        }

        return ans;
    }
};  
int main()
{
    Solution s;
    int money, children;
    cout << "enter the coney and children :- ";
    cin >> money >> children;
    cout << s.distMoney(money, children);

    return 0;
}