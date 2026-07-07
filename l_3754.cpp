#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        string n1 = "";
        int sum = 0;

        while (n > 0) {
            int r = n % 10;
            n /= 10;

            if (r != 0) {
                n1 = to_string(r) + n1;
                sum += r;
            }
        }

        if (n1 == "") return 0;

        long long answer = stoll(n1);

        return answer * sum;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.sumAndMultiply(n);
    return 0;
}