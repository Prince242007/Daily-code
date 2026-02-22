#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string reversePrefix(string word, char ch) {
        string answer="";
        string temp="";
        int count=0;
        for (int i = 0; i < word.size(); i++)
        {
            if(word[i]==ch)
            break;
            temp+=word[i];
            count++;
        }
        reverse(temp.begin(),temp.end());
        if(count==word.size())
        {
            return word;
        }
        else
        {
            answer+=ch;
            for (int i = 0; i < temp.size(); i++)
            {
                answer+=temp[i];
            }
            for (int i = count+1; i < word.size(); i++)
            {
                answer+=word[i];
            }
            
        }
        return answer;
    }
};
int main(){
    Solution s;
    string word ;
    char ch;
    cout<<"Enter the string word :- ";
    cin>>word;
    cout<<"Enter the target character  :- ";
    cin>>ch;
    cout<<s.reversePrefix(word,ch);

    return 0;
}