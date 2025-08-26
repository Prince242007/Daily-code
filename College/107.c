#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int c=97+i-1;
        for (int j =1; j <=n-i+1; j++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
