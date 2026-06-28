#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        if (n == 0) return {0};

        vector<int> ans;

        int div = 1;
        while (n / div >= 10) {
            div *= 10;
        }

        while (div > 0) {
            int digit = n / div;
            if (digit != 0)
                ans.push_back(digit * div);

            n %= div;
            div /= 10;
        }

        return ans;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    vector<int> ans = s.decimalRepresentation(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}