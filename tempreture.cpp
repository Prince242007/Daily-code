#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int day ;
    cout << "Enter the days = ";
    cin>>day;

    float f[day] , c[day] ;
    cout << "Enter " << day << " different tempreturre :- " ;
    for(int i =0;i<day;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<day;i++)
    {
        f[i] = (c[i]*9/5)+32;
    }
    for(int  i=0;i<day;i++)
    {
        if(c[i]>30)
        {
            cout<< f[i] << " Hot";
        }    
        else if(c[i]<0)
        {
            cout<< f[i] << " Cold";
        }    
        else
        {
            cout << f[i] << " Warm";
        }
        cout << "   ";
    }
    return 0;
}
