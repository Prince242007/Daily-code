#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {

        int cycle = n - 1;
        
        if ((time / cycle) % 2 == 0) {
            return (time % cycle) + 1;
        }
        else {
            return n - (time % cycle);
        }
    }
};

int main() {

    Solution s;

    int n, time;

    cout << "Enter n and time : ";
    cin >> n >> time;

    cout << s.passThePillow(n, time);

    return 0;
}