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

   /* if (x % 2 == 0)
    {
        printf("%d is an Even number.", x);
    }
    else
    {
        printf("%d is an Odd number.", x);
    } */

    x % 2 == 0 ? printf("Even") : printf("Odd");

    return 0;
}
