#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool checkRecord(string s) {
        int absent=0 , late=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(late==3) return false;
            if(s[i]=='A') absent++;
            if(s[i]=='L') late++;
            else
            {
                late=0;
            }
        }
        if(absent<2 && late<3)
        {
            return true;
        }
        return false;
    }
};
int main(){
    Solution s1;
    string s ;
    cout<<"Ener the string s :- ";
    cin>>s;
    cout<<s1.checkRecord(s);
    return 0;
}