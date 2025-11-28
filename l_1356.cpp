#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<pair<int,int>> temp;  
        // pair = {bit_count , value}

        for(int i = 0; i < arr.size(); i++) {

            int x = arr[i];   // original value
            int count = 0;    // bit count

            // count bits of arr[i]
            while(x > 0) {
                if(x % 2 == 1) count++;
                x /= 2;
            }

            temp.push_back({count, arr[i]});
        }

        // sort by bit count first, then by number
        sort(temp.begin(), temp.end());

        vector<int> ans;
        for(auto &p : temp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> num = {0,1,2,3,4,5,6,7,8};
    vector<int> ans = s.sortByBits(num);

    for(int x : ans) cout << x << " ";
    return 0;
}
