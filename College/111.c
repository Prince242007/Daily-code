#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
        int k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                if (k % 2 == 0 )
                {
                    printf(" 0  ");
                }
                else
                {
                    printf(" 1  ");
                }
                k++;
            }
            else
            {
                printf("  ");
            }
        }
    }
        printf("\n");
    }

    return 0;
}
