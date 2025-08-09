#include <stdio.h>
float fact(int k);
int main()
{
    int n;
    float X, sum = 0;
    printf("Enter the n= ");
    scanf("%d", &n);
    printf("Enter the X= ");
    scanf("%f", &X);
    for (int k = 1,p=1; k <= n * 2; k += 2,p++)
    {
        if (p % 2 != 0)
        {
            sum += ((X * k) / fact(k));
        }
        else
        {
            sum -= ((X * k) / fact(k));
        }
    }
    printf("%f", sum);
}
float fact(int k)
{
    float fact1 = 1.0;
    for (int j = 1; j <= k; j++)
    {
        fact1 *= j;
    }
    return fact1;
}