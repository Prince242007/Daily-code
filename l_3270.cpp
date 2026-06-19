#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int generateKey(int num1, int num2, int num3) {
        int ans = 0, place = 1;

        for (int i = 0; i < 4; i++) {
            int d1 = num1 % 10;
            int d2 = num2 % 10;
            int d3 = num3 % 10;

            ans += min({d1, d2, d3}) * place;

            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
            place *= 10;
        }

        return ans;
    }
};
int main(){
    Solution s;
    int num1, num2, num3 ;
    cout<<"Enter the all three number :- ";
    cin>>num1>>num2>>num3;
    cout<<s.generateKey(num1,num2,num3);
    return 0;
}