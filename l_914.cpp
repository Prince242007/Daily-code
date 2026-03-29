#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int,int> freq;

    for(auto j: deck) {
        freq[j]++;
    }

    vector<int> counts;
    for(auto &p : freq) {
        counts.push_back(p.second);
    }

    int minFreq = *min_element(counts.begin(), counts.end());

    for(int x = 2; x <= minFreq; x++) {
        bool possible = true;

        for(int c : counts) {
            if(c % x != 0) {
                possible = false;
                break;
            }
        }

        if(possible) return true;
    }

    return false;
}
};
int main(){
    Solution s;
    vector<int> deck={1,2,3,4,4,3,2,1};
    cout<<s.hasGroupsSizeX(deck);
    return 0;
}