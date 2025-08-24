#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d", &n);
    for (int i = n; i>=1; i--)
    {

        for (int j =i; j >=1; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
