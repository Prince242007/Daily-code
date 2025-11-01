#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        while (n > 1) { // loop until one team remains
            if (n % 2 == 0) {
                matches += n / 2;
                n /= 2;
            } else {
                matches += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return matches;
    }
};

int main(){
    Solution s;
    int n; 
    cout<<"Enter the number = ";
    cin>>n;
    cout<<s.numberOfMatches(n);
    
    return 0;
}