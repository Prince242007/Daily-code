#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec={1,2,3};
    cout << vec[0];
    vector<int> vec1(3,0);
    for(int i : vec1)
    {
        cout << vec1[i]<<"\n" ;
    }
    vec1.push_back(2);
    cout << vec1[3];
    vec1.pop_back();
    cout << vec1[3];
    return 0;
}
