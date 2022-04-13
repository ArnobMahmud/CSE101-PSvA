#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, i;
    for (i = 0; i <= 7;)
    {
        i += 5;
        a += i;
        i -= 3;
    }
    printf("%d", a);
}