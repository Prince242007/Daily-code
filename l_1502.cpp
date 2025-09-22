#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int i=0;
    int diff=arr[1]-arr[0];
    while(i<arr.size()-1)
    {
        if(diff != (arr[i+1]-arr[i]) && i!=0)
        {
            cout<<"False";
            return false;
        }
        diff=arr[i+1]-arr[i];
        i++;
    }
    cout<<"True";
    }
};
int main(){
    Solution s;
    vector<int> arr={1,3,5};
    s.canMakeArithmeticProgression(arr);
    return 0;
}