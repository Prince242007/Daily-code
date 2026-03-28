#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int titleToNumber(string columnTitle) {
    int ans = 0;
    
    for (int i = 0; i < columnTitle.length(); i++) {
        int value = columnTitle[i] - 'A' + 1;
        ans = ans * 26 + value;
    }
    
    return ans;
}
};
int main(){
    Solution s;
    string columntitle ;
    cout<<"Enter the String word:- ";
    cin>>columntitle;
    cout<<s.titleToNumber(columntitle);
    
    return 0;
}