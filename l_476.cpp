#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findComplement(int num) {
        int sum = 0;
        string result1 = "";
        int tempA = num;  // Copy for binary conversion

        if (tempA == 0) {
            result1 = "1";
        }

        while (tempA > 0) {
            int r = tempA % 2;
            if (r == 1) {
                result1 = '0' + result1;  
            } else {
                result1 = '1' + result1;  
            }
            tempA /= 2;
        }

        int power = 0;
        for (int i = result1.length() - 1; i >= 0; i--) {
            if (result1[i] == '1') {
                sum += pow(2, power);
            }
            power++;
        }

        return sum;
    }
};
int main(){
    Solution s;
    int num ;
    cout<<"Enter the umber :- ";
    cin>>num;
    cout<<s.findComplement(num);
    return 0;
}