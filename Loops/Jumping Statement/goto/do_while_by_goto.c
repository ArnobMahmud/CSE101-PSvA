/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*  int i;
     i = 0;

     do
     {
         printf("%d ", i); // 0 1 2 3 4
         i++;

     } while (i < 5); */

    int i;
    i = 0;

label:
    printf("%d ", i); // 0 1 2 3 4
    i++;

    if (i < 5)
    {
        goto label;
    }

    return 0;
}
