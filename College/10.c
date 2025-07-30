#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float c,b,a;
    float s;
    printf("Enter the Value of c,a,b= ");
    scanf(" %f %f %f",&c,&a,&b);
    s=((4*a+c)-2*a*b)/100;
    printf("%f",s);
    return 0;
}
