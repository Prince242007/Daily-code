#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int countOperations(int num1, int num2) {
        int count=0;
        
        if(num1==0 && num2==0)
        {
            return 0;
        }
        else if(num1==0 || num2==0)
        {
            return 0;
        }

        while (true)
        {
            if(num1>=num2){
                num1-=num2;
            }
            else{
                num2-=num1;
            }
            count++;
            if(num1==0 || num2==0)
            {
                break;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    int num1,num2;
    cout<<"Enter the num1 and num2 :-  ";
    cin>>num1>>num2;
    cout<<s.countOperations(num1,num2);
    return 0;
}