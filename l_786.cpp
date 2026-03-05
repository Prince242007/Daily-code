#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        vector<pair<double,pair<int,int>>> ans;

        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                double val = (double)arr[i]/arr[j];
                ans.push_back({val,{arr[i],arr[j]}});
            }
        }

        sort(ans.begin(),ans.end());

        return {ans[k-1].second.first, ans[k-1].second.second};
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,5};
    vector<int> ans1;
    int k;

    cout<<"Enter the number k :- ";
    cin>>k;

    ans1=s.kthSmallestPrimeFraction(nums,k);

    cout<<ans1[0]<<","<<ans1[1];

    return 0;
}