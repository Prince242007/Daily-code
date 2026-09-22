#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> minutes;

        // Convert HH:MM into total minutes
        for (string time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3, 2));

            minutes.push_back(hour * 60 + minute);
        }

        sort(minutes.begin(), minutes.end());

        int ans = INT_MAX;

        // Difference between consecutive times
        for (int i = 1; i < minutes.size(); i++) {
            ans = min(ans, minutes[i] - minutes[i - 1]);
        }

        // Difference between last and first (next day)
        ans = min(ans, 1440 - minutes.back() + minutes[0]);

        return ans;
    }
};
int main(){
    Solution s;
    vector<string> timePoints={"23:59","00:00"};
    cout<<s.findMinDifference(timePoints);
    return 0;
}