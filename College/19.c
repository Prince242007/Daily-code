#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter the i = ");
    scanf("%d",&i);
    if(i>0) printf("greater than zero");
    else if(i<0) printf("Less than zero");
    else printf("Is zero");
    return 0;
}
