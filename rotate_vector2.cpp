#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rotate_vector(vector<int> &num, int k)
    {
        int n= num.size();
        vector<int> backup(k);
        for (int i = n-k; i < n; i++)
        {
            backup[i-(n-k)] = num[i];
        }
        for (int i = n-k-1; i >=0; i--)
        {
            num[i+k]=num[i];
        }
        for (int i = 0; i < k; i++)
        {
            num[i]=backup[i];
        }
        return  num ;
    }
};
int main()
{
    Solution s;
    vector<int> num = {1, 2, 3, 4, 5};
    vector<int> ans =s.rotate_vector(num ,2);
    for(int i=0;i<ans.size();i++)
    {
        cout<< ans[i] <<"  ";
    }
    return 0;
}