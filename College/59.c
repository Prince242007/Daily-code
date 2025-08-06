#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, temp, r, rev = 0;
    printf("Enter the n =");
    scanf("%d", &n);
    temp = n;
    for (; n > 0; n /= 10)
    {
        r = n % 10;
        rev = rev * 10 + r;
    }
    if (temp % 10 == 0)
    {
        printf("0");
    }
    printf("%d", rev);

    return 0;
}