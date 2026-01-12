#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int theMaximumAchievableX(int num, int t) {
        return num+2*t;
    }
};
int main(){
    Solution s;
    int n ,t;
    cout<<"Enter the number and value of t :- ";
    cin>>n>>t;
    cout<<s.theMaximumAchievableX(n,t);
    
    return 0;
}