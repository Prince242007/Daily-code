#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number = ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d",i);
        for (int j = 2*i-1; j >0;j--)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    
    return 0;
}
