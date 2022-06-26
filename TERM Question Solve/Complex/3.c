#include <stdio.h>

int fun1(int c)
{
    return c++;
}

int fun2(int *p)
{
    return *p++;
}

int main(int argc, char const *argv[])
{
    int a = 3, b = 3, x, y;

    x = fun1(a);
    y = fun2(&b);

    printf("%d\n", x);
    printf("%d\n", y);

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}
