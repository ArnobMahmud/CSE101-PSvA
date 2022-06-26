#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 5; i < 20; i += 3)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    printf("%d", i);

    return 0;
}
