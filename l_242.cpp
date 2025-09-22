#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) cout<<"false";

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t)
        cout<<"true";
        else
        cout<<"False";
    }
};
int main(){
    Solution s;
    string string1,string2;
    cout<<"Enter the string 1 :-";
    cin>> string1;
    cout<<"Enter the string 2 :-";
    cin>> string2;
    s.isAnagram(string1,string2);
    
    return 0;
}