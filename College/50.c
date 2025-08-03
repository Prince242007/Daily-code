#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0;
        for (int j= 0; j>=0; j++)
        {
            if (j%2==0)
            {
                printf("%d ",j);
                a++;
            }
            if(a>=100)
            {
                break;
            }
    }
    
    return 0;
}
