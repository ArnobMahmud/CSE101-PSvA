/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    /* for (int i = 0; i < 5; i++)
       {
           printf("%d ", i); // 0 1 2 3 4
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
