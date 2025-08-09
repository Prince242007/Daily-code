#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Enter the first number =");
    scanf("%d",&n1);
    printf("Enter the second number =");
    scanf("%d",&n2);

    int sumo = 0, sume = 0;
    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i % 2 != 0)
            {
                sumo += i;
            }
            else
            {
                sume += i;
            }
        }
    }
    else
    {
        printf("Please enter the first small number ");
    }
    printf("%d ==>Sum of odd numbers", sumo);
    printf("\n%d ==>Sum of even numbers", sume);

    return 0;
}
