#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int c;
        if (i != 1)
        {
            c = n - i + 1;
        }
        else
        {
            c = n - i;
        }
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n)
            {
                if (j <= n - i + 1)
                {
                    printf("%d", j);
                }
                else if (j > n - i + 1)
                {
                    printf(" ");
                }
            }
            else if (j > n)
            {
                if (j < i + n - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", c);
                    c--;
                }
            }
        }
        printf("\n");
    }
}