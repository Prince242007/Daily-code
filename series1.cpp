// Write a program to create this type of series 
// 0 1 4 9 16...

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
        cout<< (i*i)<<" ";
    }
    cout << "\n" << "Enter the value = ";
    cin>> val;
    // up to n value =>
    for(int i=0;i*i<=val;i++)
    {
        cout<< (i*i)<<" ";
    }
    
    return 0;
}
