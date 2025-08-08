#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sum = 0, n, A, B, C, D;
    printf("Enter the A=");
    scanf("%f", &A);
    printf("Enter the A=");
    scanf("%f", &B);
    printf("Enter the A=");
    scanf("%f", &C);
    printf("Enter the A=");
    scanf("%f", &D);
    printf("Enter the n=");
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {

        sum += A * B * i * i;
        sum += C * D * i * i;
    }
    printf("%f",sum);

    return 0;
}
