#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int product = 1;
            int x = n;

            while (x > 0) {
                product *= (x % 10);
                x /= 10;
            }

            if (product % t == 0)
                return n;

            n++;
        }
    }
};
int main(){
    Solution s;
    int n ,t;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<"Enter the t value :- ";
    cin>>t;
    cout<<s.smallestNumber(n,t);
    return 0;
}