#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0,j=0; (i < haystack.size() && j<needle.size());i++)
    {
        if(haystack[i]==needle[j])
        {
            j++ ;
        }
        else
        {
            i=i-j ;
            j=0 ;
        } 
        if( j ==needle.size())
        cout<< (i-j+1);
    }
    cout<< "-1";
        
    }
};
int main(int argc, char const *argv[])
{
    string haystack ,needle;
    cout<<"Enter the haystack string :- ";
    getline(cin,haystack);
    cout<<"Enter the needle string :- ";
    getline(cin,needle);
    Solution s;
    s.strStr(haystack,needle);
    return 0;
}
