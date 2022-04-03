/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bin, dec = 0, rem, val, base = 1;

    scanf("%d", &bin);

    val = bin;
    while (bin != 0)
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }

    printf("%d is in decimal is %d", val, dec);

    return 0;
}
