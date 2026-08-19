#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maxy(vector<int> &arr,int ind)
    {
        int moto =INT_MIN;
        if(ind==arr.size()-1) return -1;
        for (int i = ind+1; i < arr.size(); i++)
        {
            moto=max(moto,arr[i]);
        }
        return moto ;
    }
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans1;
        for (int i = 0; i < arr.size(); i++)
        {
            ans1.push_back(maxy(arr,i));
        }
        return ans1;
    }
};
int main(){
    Solution s;
    vector<int> arr={17,18,5,4,6,1};
    vector<int> ans=s.replaceElements(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}