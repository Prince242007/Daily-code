#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a,b;
    float c;
    printf("Enter the Value of a,b = ");
    scanf(" %d %d",&a,&b);
    c=(a+b)*(a+b);
    printf("%f",c);
    return 0;
}
