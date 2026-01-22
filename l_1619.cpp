#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    double trimMean(vector<int>& arr) {
        double ans ;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int sum=0;
        for (int i = 0.05*n; i < n-n*0.05; i++)
        {
            sum+=arr[i];
        }
        ans= sum/(n-(n*2*0.05));
        
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> arr={6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
    cout<<s.trimMean(arr);
    return 0;
}