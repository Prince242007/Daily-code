#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int i = num.size() - 1;

        while (i >= 0 && k > 0) {
            int sum = num[i] + k;

            num[i] = sum % 10;
            k = sum / 10;

            i--;
        }

        while (k > 0) {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};

int main() {

    Solution s;

    vector<int> nums = { 1,2,0,0};

    int k;
    cout << "Enter k: ";
    cin >> k;

    vector<int> ans = s.addToArrayForm(nums, k);

    for (int x : ans)
        cout << x << " ";

    return 0;
}