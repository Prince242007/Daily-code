#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number =");
    scanf("%d", &n);
    int a[n],c;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                c=a[i];
                a[i] = a[j];
                a[j]=c;
            }
        }
    }
    printf("In Assending order . ");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d",i, a[i]);
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                c=a[i];
                a[i] = a[j];
                a[j]=c;
            }
        }
    }
    printf("\nIn Dessending order . ");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d",i, a[i]);
    }
    return 0;
}
