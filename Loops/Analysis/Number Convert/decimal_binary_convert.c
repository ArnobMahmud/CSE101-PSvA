/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec, bin, rem, base = 1;

    scanf("%d", &dec);

    while (dec != 0)
    {
        rem = dec % 2;
        bin += rem * base;
        base *= 10;
        dec /= 2;
    }

    printf("%d", bin);

    return 0;
}
