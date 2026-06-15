#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maxContainers(int n, int w, int maxWeight) {
        return min(n*n , maxWeight/w);
    }
};
int main(){
    Solution s;
    int n, w,  maxWeight;
    cout<<"Enter the n  , w and maxWeight :- ";
    cin>>n>>w>>maxWeight;
    cout<<s.maxContainers(n,w,maxWeight);
    return 0;
}