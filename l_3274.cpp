#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int sum1 = coordinate1[0] + coordinate1[1];
        int sum2 = coordinate2[0] + coordinate2[1];
        return (sum1 % 2) == (sum2 % 2);
    }
};

int main(){
    Solution s;
    string coordinate1, coordinate2 ;
    cout<<"Enter the cordinates :- ";
    cin>>coordinate1>>coordinate2;
    cout<<s.checkTwoChessboards(coordinate1,coordinate2);
    return 0;
}