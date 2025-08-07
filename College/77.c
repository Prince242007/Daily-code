#include<stdio.h>
int main(int argc, char const *argv[])
{
    float X,sum=0,n;
    printf("Enter the X=");
    scanf("%f",&X);
    printf("Enter the n=");
    scanf("%f",&n);
    for (int i = 1; i <=n ; i++)
    {
        sum=sum+((X*i)/(i*11.0));   
    }
    printf("%f",sum);
    return 0;
}
