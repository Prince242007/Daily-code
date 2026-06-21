#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0,count=0;
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum>coins){
                break;
            }
            count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int> costs={1,3,2,4,1};
    int coins;
    cout<<"Enter the number of coins :-";
    cin>>coins;
    cout<<s.maxIceCream(costs,coins);
    return 0;
}