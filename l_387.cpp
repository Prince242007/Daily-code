#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int firstUniqChar(string str) {
    unordered_map<char,int> freq;

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] == 1)
            return i;
    }

    return -1;
}
};
int main(){
    Solution s;
    string str;
    cout<<"Enter the string :- ";
    cin>>str;
    cout<<s.firstUniqChar(str);
    return 0;
}