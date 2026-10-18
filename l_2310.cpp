#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumNumbers(int num, int k) {
        if (num == 0) return 0;

        for (int i = 1; i <= 10; i++) {
            int sum = i * k;

            if (sum % 10 == num % 10 && sum <= num) {
                return i;
            }
        }

        return -1;
    }
};

int main(){
    Solution s;
    int num,  k;
    cout<<"Enter the num and k :- ";
    cin>>num>>k;
    cout<<s.minimumNumbers(num,k);
    return 0;
}