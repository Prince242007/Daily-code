#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    bool check_sum(int i)
    {
        int answer=0 ;
        while (i>0)
        {
            answer+= (i%10);
            i/=10;
        }
        if(answer%2==0)
        {
            return true;
        }
        return false;
        
    }
    int countEven(int num) {
        int count=0;
        for (int i = 2; i <= num; i++)
        {
            if(check_sum(i))
            {
                count++;
            }
        }
        return count;

    }
};
int main(){
    Solution s;
    int num;
    cout<<"Enter the number :- ";
    cin>> num;
    cout<<s.countEven(num);
    return 0;
}