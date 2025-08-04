#include<stdio.h>
int main(int argc, char const *argv[])
{
    float sum=0,n=1;
    for (int i = 1; i <10; i++)
    {
    sum = sum+(n/(n+1));
    n++;
    }
    printf("%f",sum);
    return 0;
}
