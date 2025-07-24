#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int process(char c)
{   
    switch (c)
    {
        int val ;
    case 'I':
        val =1;
        return val;
        break;
    case 'V':
        val =5;
        return val;
        break;
    case 'X':
        val =10;
        return val;
        break;
    case 'L':
        val =50;
        return val;
        break;

    case 'C':
        val =100;
        return val;
        break;
    case 'D':
        val =500;
        return val;
        break;
        
    case 'M':
        val =1000;
        return val;
        break;
    
    default:
        break;
    }

}
int  romantonum(string roman)
{
    char c ;
    int value1 , value2;
    long  sum=0 ;
    for(int i=0;i<roman.size();i++)
    {
        
        value1=process(roman[i]);
        value2=process(roman[i+1]);
        if(value1>=value2)
        sum += process(roman[i]);
        else
        {
            sum =sum+process(roman[i+1])-process(roman[i]);
            i++;
        }
        
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    string  roman ;
    cout <<"Enter the String "  ;
    cin>> roman ;
    transform(roman.begin(), roman.end(), roman.begin(), ::toupper);
    cout << romantonum(roman);
    return 0;
}
