#include <stdio.h>

int main()
{
    int i = 0;
    for (; i; i = i++)
    {
        printf("%d\n", i);
    }
    //printf("%d", i = i++);
    printf("%d\n", i);
}