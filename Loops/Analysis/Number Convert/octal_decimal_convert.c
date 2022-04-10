/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int oct, dec, rem, base = 1;

    scanf("%d", &oct);

    while (oct != 0)
    {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    printf("%d", dec);

    return 0;
}
