#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &a, int l, int h, int mid)
    {
        int low = mid - l + 1;
        int r = h - mid;
        int lt[low];
        int rt[r];
        for (int i = 0; i < low; i++)
        {
            lt[i] = a[l + i];
        }
        for (int i = 0; i < r; i++)
        {
            rt[i] = a[mid + i + 1];
        }
        int i = 0, j = 0, k = l;
        while (i < low && j < r)
        {
            if (lt[i] < rt[j])
            {
                a[k++] = lt[i++];
            }
            else
            {
                a[k++] = rt[j++];
            }
        }
        while (i < low)
        {
            a[k++] = lt[i++];
        }

        // Copy any leftover elements from the right subarray
        while (j < r)
        {
            a[k++] = rt[j++];
        }
    }
    void merge_sort(vector<int> &a, int l, int h)
    {
        if (l < h)
        {
            int mid = l + (h - l) / 2;
            merge_sort(a, l, mid);
            merge_sort(a, mid + 1, h);
            merge(a, l, h, mid);
        }
    }
    vector<int> sortArray(vector<int> &nums)
    {
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};
int main()
{
    Solution s;
    vector<int> nums={5,2,3,1};
    vector<int> ans=s.sortArray(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}