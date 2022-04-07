/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bin, dec, rem, base = 1;

    scanf("%d", &bin);

    while (bin != 0)
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }

    printf("%d", dec);

    return 0;
}
