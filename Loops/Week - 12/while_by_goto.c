/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    /* int i;
    i  = 0;

    while (i < 5)
    {
        printf("%d ", i); // 0 1 2 3 4
        i++;
    } */

    int i;
    i = 0;

label:
    if (i < 5)
    {
        printf("%d ", i); // 0 1 2 3 4
        i++;

        goto label;
    }

    return 0;
}
