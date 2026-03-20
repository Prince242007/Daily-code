#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> count(40, 0); 

        for (int i = 1; i <= n; i++) {
            int num = i, sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            count[sum]++;
        }

        
        int maxSize = 0;
        for (int c : count) {
            maxSize = max(maxSize, c);
        }

        int result = 0;
        for (int c : count) {
            if (c == maxSize) {
                result++;
            }
        }

        return result;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.countLargestGroup(n);
    return 0;
}