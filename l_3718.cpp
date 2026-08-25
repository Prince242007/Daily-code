#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        int ans =k,i=1;
        sort(nums.begin(),nums.end());
        while (true)
        {
            bool is_there=true;
            int temp = ans*i;
            for (int j = 0;j< nums.size(); j++)
            {
                if(nums[j]==temp)
                {
                    break;
                }
                if(j==nums.size()-1)
                {
                    is_there =false;
                }
            }
            if(!is_there) return temp;
            i++;
            
        }
        
    }
};
int main()
{
    Solution s;
    vector<int> nums = {8,2,3,4,6};
    int k;
    cout << "Enter the value of k :- ";
    cin >> k;
    cout<<s.missingMultiple(nums,k);

    return 0;
}