#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n =");
    scanf("%d",&n);
    int a=1,b=n;
    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
        printf("%d ",a);
        a++;
        }
        else
        {
            printf("%d ",b);
            b--;
        }
    }
    return 0;
}
