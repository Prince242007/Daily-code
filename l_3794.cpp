#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
     int i=0;int j=k-1;
     if(s.size()==0)
     {
        return "";
     }
     while(i<j)
     {
        swap(s[i],s[j]);
        i++;
        j--;
     }   
     return s;
    }
};
int main(){
    Solution s;
    string s1; int k;
    cout<<"Enter the string and value of the k :-  " ;
    cin>>s1>>k;
    cout<<s.reversePrefix(s1,k);
    return 0;
}