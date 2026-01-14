#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        for(char c : text) {
            if(c=='b'||c=='l'||c=='a'||c=='o'||c=='n')
            {
                freq[c]++;
            }
        }
        
        return min({freq['b'], freq['a'], freq['l']/2, freq['o']/2, freq['n']});

    }
};
int main(){
    Solution s;
    string s1;
    cout<<"Enter the string :- ";
    cin>>s1;
    cout<<s.maxNumberOfBalloons(s1);
    
    return 0;
}