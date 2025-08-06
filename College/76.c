#include<stdio.h>
int main(int argc, char const *argv[])
{
    int X,sum=0,n;
    printf("Enter the X=");
    scanf("%d",&X);
    printf("Enter the n=");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i+=2)
    {
        sum=sum+X*i;   
    }
    printf("%d",sum);
    return 0;
}
