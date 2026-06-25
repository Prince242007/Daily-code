#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool validDigit(int n, int x) {
        bool answer =false;
        string temp1 = to_string(n);
        string temp2 = to_string(x);
        if(temp1[0]==temp2[0])
        {
            return false;
        }
        for (int i = 1; i < temp1.length(); i++)
        {
            if(temp1[i]==temp2[0])
            {
                return true;
            }
        }
        return false;        
    }
};
int main(){
    Solution s;
    int n,x;
    cout<<"Enter the number and digit :- ";
    cin>>n>>x;
    cout<<s.validDigit(n,x);
    return 0;
}