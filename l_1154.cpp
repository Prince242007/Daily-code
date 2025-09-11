#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    // string date = "2019-01-09";
    string date = "2019-02-10";
    string part1 = date.substr(0, 4);
    int n1 = stoi(part1);
    string part2 = date.substr(6, 8);
    int n2 = stoi(part2);
    string part3 = date.substr(8, 10);
    int n3 = stoi(part3);
    // cout<<n3;
    int days = n3;
    for (int i = 1;i<n2;i++)
    {
        if ((n1 % 4 == 0 && n1 % 100 != 0) || (n1 % 400 == 0))
        {
            if (i == 1 ||i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                days = days + 31;
            }
            else if (i == 2)
            {
                days = days + 29;
            }
            else
            {
                days = days + 30;
            }
        }
        else
        {
            if (i == 1 ||i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                days = days + 31;
            }
            else if (i == 2)
            {
                days = days + 28;
            }
            else
            {
                days = days + 30;
            }
        }
    }
    // cout<< n3<<"\n";
    cout << days;
    return 0;
}
