#include <stdio.h>
int main()
{
    int n, sum = 0,a=0;
    printf("Enter the n= ");
    scanf("%d", &n);
    for (int i = 1, j = 31; i <= n; i++, j++)
    {
        a+=i;
        sum += a * j;
    }
    printf("%d", sum);
    return 0;
}