#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
