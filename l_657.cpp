#include<bits/stdc++.h>
using namespace std;
class Solution{
public :
    bool judgeCircle(string moves){
        int lr=0,i=0,ud=0;
        while(i<moves.length())
        {
            if(moves[i]=='U')
            ud++;
            else if(moves[i]=='D')
            ud--;
            else if(moves[i]=='L')
            lr--;
            else
            lr++;
            i++;
        }
        if(lr==0 && ud==0)
        return true;
        else
        return false;
    }
};
int main(){
    Solution s;
    string moves="UD";
    cout<<s.judgeCircle(moves);
    return 0;
}