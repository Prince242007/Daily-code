#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    double angleClock(int hour, int minutes) {
        double degree_h,degree_m ;
        degree_h = hour* 30 + minutes * 0.5 ;
        degree_m =   minutes * 6 ;
        return min(360  - abs(degree_h-degree_m) ,abs(degree_h-degree_m) );


    }
};
int main(){
    Solution s;
    int h , m;
    cout<<"Enter the hour and minute :- ";
    cin>>h>>m;
    cout<<s.angleClock(h,m);
    return 0;
}