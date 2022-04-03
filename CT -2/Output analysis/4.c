#include <stdio.h>

int main()
{
    int a = 0, i = 0;
    for (; i < 7;)
    {
        i = i + 5;
        a = a + i;
        i -= 3;
    }
    printf("i = %d, a = %d\n", i, a);
}
