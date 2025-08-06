#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, temp, r, sum = 0;
    printf("Enter the n =");
    scanf("%d", &n);
    temp = n;
    for (; n > 0; n /= 10)
    {
        r = n % 10;
        sum = sum  + r;
    }
    printf("%d", sum);
    return 0;
}