#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans1;
        vector<int> temp;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]==c)
            {
                temp.push_back(i);
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            int miny = INT_MAX;
            for (int j = 0; j < temp.size(); j++)
            {
                miny= min(miny,abs(temp[j] - i));
            }
            ans1.push_back(miny);
        }
        return ans1;
    }
};
int main(){
    Solution s;
    string s1;
    char c;
    cout<<"Enter the string :- ";
    cin>>s1;
    cout<<"Enter the character :- ";
    cin>>c;
    vector<int> ans = s.shortestToChar(s1,c);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}