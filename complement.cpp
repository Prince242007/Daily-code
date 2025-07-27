#include<iostream>
#include<cmath>
using namespace std ;
 int main(int argc, char const *argv[])
 {
    int n ;
    cout <<"Enter the number = ";
    cin>>n;
    int sum = 0;
        string result1 = "";
        int tempA = n;  // Copy for binary conversion

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

        cout << sum;
 }
 