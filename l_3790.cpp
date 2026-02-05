#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAllOneMultiple(int k) {
        // No solution if k is divisible by 2 or 5
        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int num = 1 % k;
        int count = 1;

        while (num != 0) {
            num = (num * 10 + 1) % k;
            count++;
        }

        return count;
    }
};

int main(){
    Solution s;
    int n;
    cout<<"Enter the n :- ";
    cin>>n;
    cout<<s.minAllOneMultiple(n);
    return 0;
}