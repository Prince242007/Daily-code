#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++)
        {
            int min_index = std::distance(nums.begin(), std::min_element(nums.begin(), nums.end()));

            nums[min_index] = nums[min_index] * multiplier; //  Fixed
        }
        return nums;

    }
};
int main(){
    Solution s;
    vector<int> nums={2,1,3,5,6};
    int k,  multiplier ;
    cout<<"Enter the value of the k and multiplier :- ";
    cin>>k>>multiplier;
    vector<int> ans1= s.getFinalState(nums,k,multiplier);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}