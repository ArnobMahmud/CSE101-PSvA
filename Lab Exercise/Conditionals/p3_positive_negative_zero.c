/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

    int main(int argc, char const *argv[])
{
    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    /* if (x > 0)
     {
         printf("Positive");
     }
     else if (x < 0)
     {
         printf("Negative");
     }
     else
     {
         printf("Zero");
     } */

    x > 0   ? printf("Positive")
    : x < 0 ? printf("Negative")
            : printf("Zero");

    return 0;
}
