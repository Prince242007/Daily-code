#include <iostream>
using namespace std;
struct Item
{
    string name = "";
    int val = 0;
};
int main()
{
    Item A[5];
    // A[0].name="P1";
    // A[0].val=1;
    // A[1].name="P1";
    // A[1].val=1;
    //  {1, 15, 20, 30, 35};
    cout << "Enter the value ";
    cout << "Enter 5 items (name and value):\n";
    for (int aindx = 0; aindx < 5; aindx++)
    {
        getline(cin, A[aindx].name);
        cin >> A[aindx].val;
        cin.ignore(); // clear newline
    }

    Item B[6];
    cout << "Enter 6 items (name and value):\n";
    for (int bindx = 0; bindx < 6; bindx++)
    {
        getline(cin, B[bindx].name);
        cin >> B[bindx].val;
        cin.ignore(); // clear newline
    }

    // int B[] = {3, 13, 20, 31, 42, 50};
    int sizea = sizeof(A) / sizeof(A[0]);
    int sizeb = sizeof(B) / sizeof(B[0]);
    Item C[sizea + sizeb];
    int i = 0, j = 0, k = 0;

    while (i < sizea && j < sizeb)
    {
        if (A[i].val < B[j].val)
        {
            C[k] = A[i++];
        }
        else
        {
            C[k] = B[j++];
        }
        k++;
    }
    // to add all remaining elements of A
    while (i < sizea)
    {
        C[k++] = A[i++];
    }
    // to add all remaining elements of B
    while (j < sizeb)
    {
        C[k++] = B[j++];
    }
    for (int indx = 0; indx < sizea + sizeb; indx++)
    {
        cout << C[indx].name <<"  "<< C[indx].val << " ";
    }
    cout << endl;
    return 0;
}