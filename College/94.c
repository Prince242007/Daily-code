#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,k=1;
    printf("Enter the Number = ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i;j++)
        {
            if(k%2!=0)
            {
                printf("1");
            }
            else{
                printf("0");
            }
            k++;
        }
        printf("\n");
        
    }
    
    return 0;
}
