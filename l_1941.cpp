#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;
        
        for(char c : s) {
            freq[c]++;
        }
        
        int count = freq.begin()->second;
        for(auto it : freq) {
            if(it.second != count)
                return false;
        }
        return true;
    }
};
int main(){
    Solution s;
    string n;
    cout<<"Enter the string :- ";
    cin>>n;
    cout<<s.areOccurrencesEqual(n);
    return 0;
}