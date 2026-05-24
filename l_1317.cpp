#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool check(int x)
    {
        while(x > 0)
        {
            if(x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++)
        {
            int j = n - i;
            if(check(i) && check(j))
            {
                return {i, j};
            }
        }
        return {};
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number  :- ";
    
    cin>>n;
    vector<int> ans=s.getNoZeroIntegers(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}