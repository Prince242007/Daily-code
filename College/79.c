#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s, n, a = 0, b = 1;
    printf("Enter the n= ");
    scanf("%d", &n);
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 2; i < n; i++)
    {
        s = a + b;
        a = b;
        b = s;
        printf("%d ", b);
    }
    return 0;
}
