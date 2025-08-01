#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1 , s2 ;
    cout << "Enter the string = ";
    cin>> s1>>s2 ;
      for (int i = 0,j=0; (i < s1.size() && j<s2.size());i++)
    {
        if(s1[i]==s2[j])
        {
            j++ ;
        }
        else
        {
            i=i-j ;
            j=0 ;
        } 
        if( j ==s2.size())
        cout <<(i-j+1);
    }


}
