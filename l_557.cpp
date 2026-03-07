#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "", temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                reverse(temp.begin(), temp.end());
                ans += temp + " ";
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }

        reverse(temp.begin(), temp.end()); // reverse last word
        ans += temp;

        return ans;
    }
};
int main()
{
    Solution s;
    string str;
    cout << "Enter the string :- ";
    cin >> str;
    cout << s.reverseWords(str);

    // string s,s1="",ans="";
    // getline(cin ,s);
    // cout<<s<<"\n";
    // for(int i =s.size()-1;i>=0;i--)
    // {
    //     if(s[i]==' ')
    //     {
    //         ans+= s1 +" ";
    //         s1="";
    //     }
    //     else{
    //         s1=s[i] +s1;
    //     }
    // }
    // ans += s1;
    // cout << ans ;
    // return 0;
    return 0;
}