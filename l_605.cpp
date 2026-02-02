#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();

    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0) {
            int left = (i == 0) ? 0 : flowerbed[i - 1];
            int right = (i == size - 1) ? 0 : flowerbed[i + 1];

            if (left == 0 && right == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
    }
    return count >= n;
}

};
int main(){
    Solution s;
    vector<int> flowerbed={1,0,0,0,1};
     int n;
     cout<<"Enter the number :- ";
     cin>>n;
    cout<<s.canPlaceFlowers(flowerbed,n);
    return 0;
}