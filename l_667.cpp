#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;

        int left = 1;
        int right = k + 1;

        while (left <= right) {
            ans.push_back(left++);

            if (left <= right) {
                ans.push_back(right--);
            }
        }

        for (int i = k + 2; i <= n; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
int main(){
    Solution s;
    int n, k;
    cout <<"Enter the  n and k value :- ";
    cin>>n>>k;
    vector<int> ans = s.constructArray(n,k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<' ';
    }
      
    return 0;
}