/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int oct, bin, rem, base = 1, dec;

    scanf("%d", &oct);

    /* Convert oct -> dec */
    while (oct != 0)
    {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    /* Convert dec -> bin */
    rem, base = 1;
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
