#include<stdio.h>
float fact(int k);
int main()
{
    int n;
    float sum=0;
    printf("Enter the n= ");
    scanf("%d", &n);
    for(int k=1;k<=n*2;k+=2)
    {
    sum+=(fact(k)/fact(k+1));
    }
    printf("%f",sum);
}
float fact(int k)
{
   float fact1=1.0;
   for(int j=1;j<=k;j++)
   {
    fact1*=j;
   } 
   return fact1;
}
