#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        for (int i = 1; i < n; i++) {
            if (colors[i] != colors[0]) {
                ans = max(ans, i);
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, n - 1 - i);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>  colors={1,1,1,6,1,1,1};
    cout<<s.maxDistance(colors);
    return 0;
}