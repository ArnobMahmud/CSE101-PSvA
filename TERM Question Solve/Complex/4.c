#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 3; i > -2; i--)
    {
        printf("%d\n", a[i + 1]);
    }

    return 0;
}
