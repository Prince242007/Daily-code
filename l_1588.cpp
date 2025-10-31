#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int sumOddLengthSubarrays(vector<int>& arr) {
    //     int sum=0;
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         for (int j = i; j < arr.size(); j++)
    //         {
    //             if((j-i+1)%2!=0)
    //             {
    //                 int k=i;
    //                 while(k<=j)
    //                 {
    //                     sum = sum+arr[k];
    //                     k++;
    //                 }
    //             }
    //         }

    //     }
    //     return sum ;
    // }
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int len = arr.size();
        int end, sum = 0;
        if (len % 2 == 0)
        {
            end = len / 2;
        }
        else
        {
            end = len / 2 + 1;
        }
        int multi = end;
        for (int i = 0; i < len; i++)
        {

            if (i < end)
            {
                sum += arr[i] * multi;
                if(i==len/2)
                {
                    multi--;
                }
                multi++;
            }
            else
            {
                multi--;
                sum += arr[i] * multi;
            }
        }
        return sum ;
    }
};
int main()
{
    Solution s;
    vector<int> arr = { 10,11,12};
    cout << s.sumOddLengthSubarrays(arr);

    return 0;
}