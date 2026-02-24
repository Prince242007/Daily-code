#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int arrangeCoins(int n) {
        int sum = n, count=0 ,i=0;
        while (true)
        {
            if(sum>i)
            {
                i++;
                sum-=i;
                count++;
            }
            else
            {
                return count;
            }
        }
        return 0;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<s.arrangeCoins(n);
    return 0;
}