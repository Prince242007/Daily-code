#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minDeletionSize(vector<string>& strs) {
    int count = 0;

    int n = strs.size();        // number of rows (strings)
    int m = strs[0].size();     // number of columns (characters)

    for (int j = 0; j < m; j++) {          // j → column
        for (int i = 1; i < n; i++) {      // i → row
            if (strs[i][j] < strs[i - 1][j]) {
                count++;                   // column is not sorted
                break;                     // move to next column
            }
        }
    }
    return count;
}

};
int main(){
    Solution s;
    vector<string> strs ={ "cba","daf","ghi" } ;
    cout<<s.minDeletionSize(strs);
    return 0;
}