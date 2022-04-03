#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    for (i; !i; i = i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}
