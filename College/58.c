#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n,sum=0;
    printf("Enter the n =");
    scanf("%f",&n);
    for (float  i = 10,j=1;  j<=n  ; j++, i=i*10)
    {
        sum=sum+(j/i);
    }
    printf("%f",sum);
    return 0;
}