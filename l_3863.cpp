#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        // Step 1: Check if already sorted
        if (is_sorted(s.begin(), s.end())) {
            return 0;
        }

        // Step 2: Length 2 cannot be fixed
        if (n == 2) {
            return -1;
        }

        // Step 3: Find minimum and maximum characters
        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        // Step 4: Minimum already first or maximum already last
        if (s[0] == mn || s[n - 1] == mx) {
            return 1;
        }

        // Step 5: Check the middle characters
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) {
                return 2;
            }
        }

        // Step 6: Otherwise, three operations
        return 3;
    }
};

int main(){
    Solution s;
    string str;
    cout<<"enter the string :- ";
    cin>>str;
    cout<<s.minOperations(str);
    return 0;
}