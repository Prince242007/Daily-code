#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minMaxDifference(int num) {
        string s = to_string(num);
        // use of ai
        // Minimum number
        string mn = s;
        char ch = s[0];
        for (char &c : mn) {
            if (c == ch)
                c = '0';
        }

        // Maximum number
        string mx = s;
        char target = '#';
        for (char c : s) {
            if (c != '9') {
                target = c;
                break;
            }
        }

        if (target != '#') {
            for (char &c : mx) {
                if (c == target)
                    c = '9';
            }
        }

        return stoi(mx) - stoi(mn);
    }
};
int main(){
    Solution s;
    int num ;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<s.minMaxDifference(num);
    return 0;
}