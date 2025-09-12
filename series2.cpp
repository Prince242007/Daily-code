#include <iostream>
#include <vector>
using namespace std;
// 0 1 5 15 37
int sumof(vector<int> &nums, int limit)
{
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        sum += nums[i];
    }
    return sum;
}

int main()
{
    int limit;
    cout << "Enter the count of elements:";
    cin >> limit;
    vector<int> nums(limit);
    int sum = 0;
    // upto n element
    for (int i = 0; i < limit; i++)
    {
        if (i != 0)
            sum = (i * i) + sumof(nums, i);
        nums[i] = sum;
        cout << sum << " ";
    }
    return 0;
}