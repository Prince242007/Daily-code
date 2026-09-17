#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int count(int i )
    {
        int c =0;
        while (i>=1)
        {
            if(i%2!=0)
            {
                c++;
            }
            i/=2;

        }
        return c;
        
    }
    vector<int> countBits(int n) {
        vector<int> ans1;
        for (int i = 0; i <=n; i++)
        {
            ans1.push_back(count(i));
        }
        return ans1;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;
    vector<int> ans = s.countBits(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


    return 0;
}