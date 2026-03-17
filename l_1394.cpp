#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        for (int i = arr.size()-1; i >=0; i--)
        {
            if(arr[i] == freq[arr[i]])
            {
                return arr[i];
            }
        }
        
        return -1;
    }
};
int main(){
    Solution s;
    vector<int> arr={1,2,2,3,3,3};
    cout<<s.findLucky(arr);
    return 0;
}