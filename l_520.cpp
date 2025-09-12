#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string word;
    cout<<"Enter the any word :- ";
    cin>>word;
    int size = word.length();
    string str1 = "", str2 = "", str3 = "";
    for (int i = 0; i < size; i++) {
            str1 += toupper(word[i]);
            str2 += tolower(word[i]);

            if (i == 0) {
                str3 += toupper(word[i]);
            } else {
                str3 += tolower(word[i]);
            }
        }   
        if(word == str1 || word == str2 || word == str3)
        {
            cout<<"True";
        }
        else{
            cout<<"False";
        }
}
