#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string winningPlayer(int x, int y) {
        int moves = min(x, y / 4);
        return moves % 2 == 1 ? "Alice" : "Bob";
    }
};
int main(){
    Solution s;
    int x,y;
    cout<<"Enter the value of x and y :- ";
    cin>>x>>y;
    cout<<s.winningPlayer(x,y);
    return 0;
}