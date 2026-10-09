#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minInsertions(string str) {
        stack<char> st;
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(') {
                st.push(str[i]);
            }
            else {
                if (i + 1 < str.length() && str[i + 1] == ')') {
                    if (!st.empty()) {
                        st.pop();
                    }
                    else {
                        count++;
                    }
                    i++;
                }
                else {
                    if (!st.empty()) {
                        st.pop();
                        count++;
                    }
                    else {
                        count += 2;
                    }
                }
            }
        }

        count += st.size() * 2;
        return count;
    }
};
int main(){
    Solution s;
    string str;
    cout<<"Enter the string :- ";
    cin>>str;
    cout<<s.minInsertions(str);
    return 0;
}