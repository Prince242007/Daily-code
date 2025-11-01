#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                if((j-i+1)%2!=0)
                {
                    int k=i;
                    while(k<=j)
                    {
                        sum = sum+arr[k];
                        k++;
                    }
                }
            }

        }
        return sum ;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {10, 11, 12};
    cout << s.sumOddLengthSubarrays(arr);
    return 0;
}