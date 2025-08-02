#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    vector<int> nums = {4, 3, 2, 6};
    int n = nums.size();
    int temp, temp2, max_sum = 0;
    for (int j = 0; j < n; j++)
    {
        temp = nums[n - 1];
        for (int i = n; i >= 0; i--)
        {
            nums[i] = nums[i - 1];
            if (i == 0)
            {
                nums[0] = temp;
            }
        }
         int sum = 0;
        for (int i =0;i<n;i++)
        {
            sum = sum+ i*nums[i];
        }
        max_sum=max(max_sum,sum ) ;
    }
    cout << max_sum; 

    return 0;
}
