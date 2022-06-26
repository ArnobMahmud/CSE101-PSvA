#include <stdio.h>

int func(int n)
{
    if (n <= 0)
    {
        return 5;
    }
    else
    {
        return n + func(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int x;
    x = func(4);
    printf("%d ", x);
}
