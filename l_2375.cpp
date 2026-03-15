#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string smallestNumber(string pattern) {
        string ans = "";
        stack<int> st;

        for (int i = 0; i <= pattern.size(); i++) {
            st.push(i + 1);

            if (i == pattern.size() || pattern[i] == 'I') {
                while (!st.empty()) {
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }

        return ans;
    }
};
int main(){
    Solution s;
    string pattern ;
    cout<<"Enter the string word :- ";
    cin>>pattern;
    cout<<s.smallestNumber(pattern);
    return 0;
}
