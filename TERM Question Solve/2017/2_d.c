/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, i = 0;

    for (i = 1; i < 10; i *= 2)
    {
        x++;
        printf("%d ", x);
    }

    printf("\nx = %d", x);

    return 0;
}

/*  Output :
    1 2 3 4
    x = 4
*/