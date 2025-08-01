#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s,s1="",ans="";
    getline(cin ,s);
    cout<<s<<"\n";
    for(int i =s.size()-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            ans+= s1 +" ";
            s1="";
        }
        else{
            s1=s[i] +s1;
        }
    }
    ans += s1;
    cout << ans ;
    return 0;
}
