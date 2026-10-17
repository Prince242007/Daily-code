#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        return (start[0] + start[1]) % 2 ==
               (target[0] + target[1]) % 2;
    }
};
int main(){
    Solution s;
    vector<int> start={1,1},target={2,2};
    cout<<s.canReach(start,target);
    

    return 0;
}