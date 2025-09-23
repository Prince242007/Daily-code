#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the main string :-";
    string text;
    getline(cin, text);
    cout<<"Enter the sub string :-";
    string pattern;
    getline(cin, pattern);

    int lt = text.length();
    int lp = pattern.length();
    for (int i = 0; i <= lt - lp; i++)
    {
        int match = true;
        for (int j = 0; j < lp; j++)
        {
            if (text[i + j] != pattern[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            cout << "location:" << i << endl;
        }
    }
}