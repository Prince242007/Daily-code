#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool valid = true;

            for (int j = 0; j < arr2.size(); j++) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int> arr11={4,5,8}, arr22={10,9,1,8};
    int d;
    cout<<"Enter the value of distance :- ";
    cin>>d;
    cout<<s.findTheDistanceValue(arr11,arr22,d);
    return 0;
}