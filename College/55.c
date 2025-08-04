#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum =0,n;
    printf("Enter the n =");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
        else{
            sum-=i;
        } 
    }
    printf("%d",sum);
    return 0;
}
