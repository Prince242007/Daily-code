#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int scoreOfParentheses(string str) {
        int ans =0 ,  c = 0  ;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i]=='(' && str[i+1]==')')
            {
            
                ans += (1 << c);
                c--;
                i++;
            }
            else if(str[i]=='(')
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    string str;
    cout<<"Enter the string :- ";
    cin>>str;
    cout<<s.scoreOfParentheses(str);
    return 0;
}