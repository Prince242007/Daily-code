#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isPrime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (int i = 3; i * i <= n; i += 2)
            if (n % i == 0)
                return false;
        return true;
    }

    int primePalindrome(int n) {
        if (n <= 2) return 2;
        if (n <= 3) return 3;
        if (n <= 5) return 5;
        if (n <= 7) return 7;
        if (n <= 11) return 11;

        // generate odd-length palindromes
        for (int i = 1; i < 100000; i++) {
            string s = to_string(i);
            string r = s;
            reverse(r.begin(), r.end());
            string pal = s + r.substr(1); // odd length palindrome
            int num = stoi(pal);

            if (num >= n && isPrime(num))
                return num;
        }
        return -1;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.primePalindrome(n);
    return 0;
}