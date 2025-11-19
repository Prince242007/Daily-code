#include <iostream>
using namespace std;
class B;
class A
{
    int vala;

public:
    A()
    {
        vala = 10;
    }
    friend void swap(A &a, B &b);
};
class B
{
    int valb;

public:
    B()
    {
        valb = 100;
    }
    friend void swap(A &a, B &b);
};
void swap(A &a, B &b)
{
    cout << "before a: " << a.vala << " b: " << b.valb << endl;
    int tmp = a.vala;
    a.vala = b.valb;
    b.valb = tmp;
    cout << "after a: " << a.vala << " b: " << b.valb << endl;
}
int main()
{
    A aOne;
    B bOne;
    swap(aOne, bOne);
    return 0;
}