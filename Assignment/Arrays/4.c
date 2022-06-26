#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;

    for (i = 0; !i; i = ++i)
        ;
    printf("%d\n", i);
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
