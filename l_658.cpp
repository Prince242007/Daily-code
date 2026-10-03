#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int l = 0;
        int r = arr.size() - k;

        while (l < r) {
            int mid = (l + r) / 2;

            if (x - arr[mid] > arr[mid + k] - x) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }

        vector<int> ans;

        for (int i = l; i < l + k; i++) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};

int main() {

    Solution s;

    vector<int> arr = {1, 2, 3, 4, 5};

    int k, x;

    cout << "Enter the value of k and x: ";
    cin >> k >> x;

    vector<int> ans = s.findClosestElements(arr, k, x);

    cout << "Answer: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}