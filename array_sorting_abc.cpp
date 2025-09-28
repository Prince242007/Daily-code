// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[] = {1, 15, 20, 30, 35};
//     int b[] = {3, 13, 20, 31, 42, 50};
//     int sizea = sizeof(a) / sizeof(a[0]);
//     int sizeb = sizeof(b) / sizeof(b[0]);
//     int c[sizea + sizeb];
//     int i = 0, j = 0, k = 0;
//     while (i < sizea && j < sizeb)
//     {
//         if (a[i] < b[j])
//         {
//             c[k] = a[i];
//             i++;
//         }
//         else
//         {
//             c[k] = b[j];
//             j++;
//         }
//         k++;
//     }
//     // To add all remaining elements of A
//     while (i < sizea)
//     {
//         c[k++] = a[i++];
//     }
//     // To add all remaining elements of B
//     while (j < sizeb)
//     {
//         c[k++] = b[j++];
//     }
//     // To print the arranged element .
//     for (int i = 0; i < sizea + sizeb; i++)
//     {
//         cout << c[i] << "  ";
//     }
//     return 0;
// }






// To desending order
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 15, 20, 30, 35};
    int b[] = {3, 13, 20, 31, 42, 50};
    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb = sizeof(b) / sizeof(b[0]);
    int c[sizea + sizeb];
    int i = sizea-1, j = sizeb-1, k = 0;
    while (i>=0 && j>=0 )
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            i--;
        }
        else
        {
            c[k] = b[j];
            j--;
        }
        k++;
    }
    // To add all remaining elements of A
    while (i >=0)
    {
        c[k++] = a[i--];
    }
    // To add all remaining elements of B
    while (j >=0)
    {
        c[k++] = b[j--];
    }
    // To print the arranged element .
    for (int i = 0; i < sizea + sizeb; i++)
    {
        cout << c[i] << "  ";
    }
    return 0;
}