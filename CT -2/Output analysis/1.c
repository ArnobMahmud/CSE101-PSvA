#include <stdio.h>

int main()
{
    int i = 0,a;
    // for (; i; i = i++)
    // {
    //     printf("%d\n", i);
    // }
    i = i++;
    a = i;
    printf("%d\n", a);
}