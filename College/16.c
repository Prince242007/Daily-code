#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float a,p,r,n;
    printf("Enter the Value of p,r,n= ");
    scanf(" %f %f %f",&p,&r,&n);
    a=p*r*n/100;
    printf("%f",a);
    return 0;
}
