#include<iostream>
using namespace std;
class Sum
{
    public:
    int sum(int a,int b)
    {
        return a+b;
    }
};
int main(int argc, char const *argv[])
{
    int a,b;
    Sum s;
    cout<<"Enter the a :- ";
    cin>>a;
    cout<<"Enter the b :- ";
    cin>>b;
    cout << "Sum of digit :- " << s.sum(a,b);

    return 0;
}

