/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec, temp = 0, rem = 0, oct = 0, base = 1;

    printf("Enter a decimal number : ");
    scanf("%d", &dec);

    temp = dec;

    while (dec != 0)
    {
        rem = dec % 8;
        oct += rem * base;
        base *= 10;
        dec /= 8;
    }

    printf("%d in octal is %d.", temp, oct);

    return 0;
}