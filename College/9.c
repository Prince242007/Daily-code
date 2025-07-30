#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float k,a;
    float x;
    printf("Enter the Value of a,k = ");
    scanf(" %f %f",&k,&a);
    x=((k-4.0)*(a*4.0))/100;
    printf("%f",x);
    return 0;
}
