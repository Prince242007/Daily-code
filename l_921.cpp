#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minAddToMakeValid(string str) {
        stack<char> st;
        st.push(str[0]);
        for (int i = 1; i < str.length(); i++)
        {
             
            if(!st.empty() && st.top()=='(' && str[i]==')')
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
        return st.size();
    }
};
int main(){
    Solution s;
    string str;
    cout<<"Enter the string :- ";
    cin>>str;
    cout<<s.minAddToMakeValid(str);
    return 0;
}