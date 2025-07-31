#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float t,v,s,m,l;
    printf("Enter the Value of v,s,m,l= ");
    scanf(" %f %f %f %f",&v,&s,&m,&l);
    t=((v+s)+(l-m)*l);
    printf("%f",t);
    return 0;
}
