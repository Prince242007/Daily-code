#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool canSplit(string s, int target){
        if(target < 0) return false;
        if(s.empty()) return target == 0;

        for(int i = 1; i <= s.size(); i++){
            int num = stoi(s.substr(0, i));
            if(canSplit(s.substr(i), target - num))
                return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int sq = i*i;
            if(canSplit(to_string(sq), i))
                ans += sq;
        }
        return ans;
    }
};

int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.punishmentNumber(n);
    return 0;
}
