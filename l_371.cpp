#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        while ((a & b) != 0) {
            int tmp = a ^ b;
            b = (a & b) << 1;
            a = tmp;
        }
        return a | b;
    }
};
int main(){
    Solution s;
    int a,b;
    cout<<"Enter the value of a and b :- ";
    cin>>a>>b;
    cout<<s.getSum(a,b);
    return 0;
}