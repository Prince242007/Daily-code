#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int groups = 0;
        int count = 0;

        while (count + groups + 1 <= n) {
            groups++;
            count += groups;
        }

        return groups;
    }
};

int main(){
    Solution s;
    vector<int> grades ={10,6,12,7,3,5};
    cout<<s.maximumGroups(grades);
    return 0;
}