#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(int n) {
        int steps = 0;

        for(int i = 2; i <= n; i++) {
            while(n % i == 0) {
                steps += i;
                n /= i;
            }
        }

        return steps;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << s.minSteps(n);
    return 0;
}