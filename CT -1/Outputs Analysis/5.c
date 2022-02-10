/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 0, z = 1;
    bool m;

    m = x == 0 || x && y;
    printf("%d\n", m); // 0

    if (m) // won't execute
    {
        if (!y)
        {
            z = 0;
            printf("%d", z);
        }
    }
    else
    {
        y = 1;
        printf("%d\n", y);
    }

    return 0;
}
