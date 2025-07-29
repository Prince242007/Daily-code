#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float  a,b;
    printf("Enter the a & b=");
    scanf("%f %f",&a,&b);
    printf("\nSquare of a = %f",pow(a,2));
    printf("\nSquare of b = %f",pow(b,2));
    printf("\nCube of a = %f",pow(a,3));
    printf("\nCube of b = %f",pow(b,3));
    return 0;
}
