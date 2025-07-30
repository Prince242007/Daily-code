#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int c,d,g,h;
    float l;
    printf("Enter the Value of c,d,g,h = ");
    scanf(" %d %d %d %d",&c,&d,&g,&h);
    l=(c+d)*(g+h);
    printf("%f",l);
    return 0;
}
