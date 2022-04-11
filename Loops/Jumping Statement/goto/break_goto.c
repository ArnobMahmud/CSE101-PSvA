/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* for (int i = 0; i <= 5; i++)
     {
         if (i == 2)
         {
             break;
         }
         printf("%d ", i); // 0 1
     } */

    for (int i = 0; i <= 5; i++)
    {
        if (i == 2)
        {
            goto label;
        }
        printf("%d ", i); // 0 1
    }

label:
    printf("\nOut of the loop");

    return 0;
}
