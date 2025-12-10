#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maximum = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++)
        {
            if(candies[i]+extraCandies >= maximum)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> can = {2,3,5,1,3}; 
    int extraCandies =3;
    vector<bool> ans1 = s.kidsWithCandies(can,extraCandies);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}