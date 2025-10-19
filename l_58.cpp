#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
     int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while(i >= 0 && s[i] == ' ') i--;

        // Count length of last word
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string :- ";
    getline(cin,s1);
    cout<< s.lengthOfLastWord(s1);
    return 0;
}