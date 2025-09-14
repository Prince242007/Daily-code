#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                printf(" %d  ", k);
                k++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
