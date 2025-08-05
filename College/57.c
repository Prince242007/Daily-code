#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 1, sum = 0;
    for (int j = 1; j > 0; j++)
    {
        if (j % 2 != 0)
        {
            sum += j;
            a++;
        }
        if (a >= 100)
        {
            break;
        }
    }
    printf("%d", sum);

    return 0;
}
