#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,c=97;
    char a;
    printf("Enter the Number = ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i;j++)
        {
            printf("%c",(char)c);
        }
        c++;
        printf("\n");
        
    }
    
    return 0;
}
