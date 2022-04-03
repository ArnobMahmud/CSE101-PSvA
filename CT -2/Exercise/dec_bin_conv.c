/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec, val, bin = 0, rem, base = 1;

    scanf("%d", &dec);

    val = dec;
    while (dec != 0)
    {
        rem = dec % 2;
        bin += rem * base;
        base *= 10;
        dec /= 2;
    }

    printf("%d in binary is %d", val, bin);

    return 0;
}
