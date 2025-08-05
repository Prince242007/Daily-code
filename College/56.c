#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,sum=0;
        for (int j= 0; j>=0; j++)
        {
            if (j%2==0)
            {
                sum=sum+j;
                a++;
            }
            if(a>=100)
            {
                break;
            }
    }
    printf("%d",sum);
    return 0;
}
