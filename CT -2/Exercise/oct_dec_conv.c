/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int oct, dec = 0, rem, val, base = 1;

    scanf("%d", &oct);

    val = oct;
    while (oct != 0)
    {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    printf("%d is in decimal is %d", val, dec);

    return 0;
}
