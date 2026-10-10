#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] > b[1];
             });

        int ans = 0;

        for (int i = 0; i < boxTypes.size(); i++) {
            int boxes = min(boxTypes[i][0], truckSize);

            ans += boxes * boxTypes[i][1];
            truckSize -= boxes;

            if (truckSize == 0) {
                break;
            }
        }

        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> boxTypes={{5,10},{2,5},{4,7},{3,9}};
    int truckSize;
    cout<<"Enter the trucksize:- ";
    cin>>truckSize;
    cout<<s.maximumUnits(boxTypes,truckSize);
    return 0;
}