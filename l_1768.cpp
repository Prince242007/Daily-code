#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2) {
        string answer ="";
        int n=word1.length(),m=word2.length();
    int i=0,j=0;
        while(i<n || j<m)
        {
            if(i>n-1)
            {
                answer +=word2.substr(j,m);
                break;
            }
            else if(j>m-1)
            {
                answer +=word1.substr(i,n);
                break;
            }
            else{
                answer=answer+word1[i]+word2[j];
            }
            i++;
            j++;
        }
        return answer;
    }
};
int main()
{
    Solution s;
    string word1 , word2 ;
    cout<<"Enter the word 1 :- ";
    cin>> word1;
    cout<<"Enter the word 2 :- ";
    cin>> word2;
    cout << s.mergeAlternately(word1, word2);
    return 0;
}