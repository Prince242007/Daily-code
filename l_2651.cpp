#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return ((arrivalTime+delayedTime)%24);
    }
};
int main(){
    Solution s;
    int at,dt;
    cout<<"Enter the arrivalTime  and  delayedTime :- ";
    cin>>at>>dt;
    cout<<s.findDelayedArrivalTime(at,dt);
    return 0;
}