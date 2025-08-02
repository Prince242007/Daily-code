#include<stdio.h>
int main(int argc, char const *argv[])
{
    float noc,tc,ecoc;
    printf("Enter the number of chair =");
    scanf("%f",&noc);
    printf("Enter the number of total cost =");
    scanf("%f",&tc);
    ecoc=tc/noc;
    printf("Cost of each chair = %f",ecoc);
    return 0;
}