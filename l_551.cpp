#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool checkRecord(string str) {
        int absent=0 , late=0;
        for (int i = 0; i < str.length(); i++)
        {
            if(late==3) return false;
            if(str[i]=='A') absent++;
            if(str[i]=='L') late++;
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
    string str ;
    cout<<"Ener the string str :- ";
    cin>>str;
    cout<<s1.checkRecord(str);
    return 0;
}