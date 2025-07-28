#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks[5]={1,2,3,4,5};
    int smallest,biggest;
    // there are two functionin the cpp
    smallest = INT_MAX ;
    smallest = min(marks[3],smallest) ;
    marks[3]=55;
    cout << marks[3];

    return 0;
}
