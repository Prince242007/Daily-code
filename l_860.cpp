#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool lemonadeChange(vector<int>& bills) {
        int fd=0,td=0;

        for(int i : bills){
            if(i == 5) {
                fd++;
            }
            else if(i == 10){
                if(fd>0) {
                    fd--;
                    td++;
                }else return false;
            }
            else {
                if(fd>0 && td>0){
                    td--;
                    fd--;
                }
                else if(fd>=3){
                    fd -= 3;
                }
                else return false;
            }
        }

        return true;
    }
};
int main(){
    Solution s;
    vector<int> bills={};
    cout<<s.lemonadeChange(bills);
    return 0;
}