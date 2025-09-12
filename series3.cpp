// Write a program to create this type of series 
// 0 0 2 6 12 20 30 42 56 ....

#include<iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ,val;
    cout << "Enter the number = ";
    cin>> n;
    // Up to n element =>
    for(int i=0;i<n;i++)
    {
        cout<< (i*i) -i<<" ";
    }
    return 0;
}
