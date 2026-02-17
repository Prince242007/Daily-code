#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int minimumFlips(int n) {
        string s1="" ;
        while (n>0)
        {
            if(n%2==0)
            {
                s1= s1 + '0';
            }
            else
            {
                s1= s1+'1';
            }
            n/=2;
        }
        string s2 = s1 ;
        int count=0;
        reverse(s1.begin(),s1.end());
        for (int i = 0; i < s2.length(); i++)
        {
            if(s2[i]!=s1[i])
            {
                count++;
            }
        }
        return count ;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.minimumFlips(n);
    return 0;
}